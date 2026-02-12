#include <Python.h>

int main(int argc, char **argv, char **envp) {

    Py_Initialize();
    
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('.')");

    PyObject* pModule = PyImport_Import(PyUnicode_DecodeFSDefault("learn_module"));
    if (pModule != NULL) {

        PyObject* pFunc = PyObject_GetAttrString(pModule, "foo");
        if (PyCallable_Check(pFunc)) {

            PyTypeObject* pType = Py_TYPE(pFunc);
            if (pType != &PyFunction_Type) {

                PyErr_Print();
            } else {

                if(PyType_Check(pType)) {

                    PyObject_CallObject(pFunc, PyTuple_Pack(2, PyUnicode_FromString("Khonello"), PyLong_FromLong(1)));
                }
            }

        }
    }
}