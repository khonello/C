#include <Python.h>

PyObject* getListObject(PyObject* , int );
int main(int argc, char **argv, char **envp) {

    Py_Initialize();

    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('.')");

    PyObject* pModule = PyImport_Import(PyUnicode_DecodeFSDefault("learn_module"));
    PyObject* pNewList = PyList_New(10);
    PyObject* pOldList = getListObject(pModule, 10);

    if (pOldList != NULL) {
        for (int i = 0; i < ((int)PyList_Size(pOldList)) / 2; i++) {
            PyList_SetItem(pNewList, i, PyList_GetItem(pOldList, i));
        }
        PyObject* slice = PyList_GetSlice(pNewList, 2, 5);
        PyObject_Print(slice, stdout, 0);
        printf("\n");
    
        Py_XDECREF(slice);
    } else {
        return -1;
    }

    Py_XDECREF(pModule);
    Py_XDECREF(pNewList);
    Py_XDECREF(pOldList);

    Py_Finalize();
    return 0;
}

PyObject* getListObject(PyObject* pModule, int len) {

    PyObject* pFunc = PyObject_GetAttrString(pModule, "bar");
    if (PyCallable_Check(pFunc)) {

        PyObject* listObj = PyObject_CallFunction(pFunc, "l", len);
        if (listObj != NULL) {

            return listObj;
        } else {

            PyErr_Print();
            return NULL;
        }

        Py_XDECREF(listObj);
    } else {

        PyErr_Print();
        return NULL;
    }

    Py_XDECREF(pFunc);
}