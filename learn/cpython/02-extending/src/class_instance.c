#include <Python.h>

int main(int argc, char **argv, char **envp) {

    Py_Initialize();

    const char* fs = "learn_module";

    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('.')");

    PyObject* pModule = PyImport_Import(PyUnicode_DecodeFSDefault(fs));

    if (pModule != NULL) {

        PyObject* pClass = PyObject_GetAttrString(pModule, "Info");
        Py_XDECREF(pModule);
        
        if (pModule->ob_refcnt != (Py_ssize_t)0) {
            Py_XDECREF(pModule);
        }

        if (PyCallable_Check(pClass)) {

            const char* format = "ss";
            const char* pArgs[] = {
                "name", "khonello"
            };

            PyObject* pObj = PyObject_CallFunction(pClass, format, pArgs[0], pArgs[1]);
            Py_XDECREF(pClass);

            if ((pObj != NULL) && (PyCallable_Check(pObj))) {

                PyObject* retval = PyObject_CallFunction(pObj, "s", "name");
                if (retval != NULL) {

                    PyObject_Print(retval, stdout, 0);
                    printf("\n");
                }
                Py_XDECREF(pObj);

            } else {
                PyErr_Print();
            }
        }
    } else {
        PyErr_Print();
    }

    Py_Finalize();
    return 0;
}