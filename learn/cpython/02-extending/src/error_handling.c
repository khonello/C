#include <Python.h>

int main(int argc, char **argv, char **envp) {

    Py_Initialize();
    
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('.')");

    PyObject* pModule = PyImport_Import(PyUnicode_DecodeFSDefault("learn_module"));
    if (pModule != NULL) {

        PyErr_SetString(PyExc_ImportError, "Module Found");
        PyErr_Print();
    } else if (PyErr_Occurred()) {

        PyErr_Print();
    }
}