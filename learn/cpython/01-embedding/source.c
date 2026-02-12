#include <Python.h>

const char* intro(const char* , const char*);
int main(int argc, char* argv[]) {

    Py_Initialize();

    const char* moduleName = "module";
    const char* argument = "khonello";

    const char* retval = intro(moduleName, argument);

    if (retval != NULL) {

        printf("%s\n", retval);
    }

    Py_Finalize();
    return 0;
}
const char* intro(const char* moduleName, const char* arg) {

    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('.')");

    PyObject* pName = PyUnicode_DecodeFSDefault("module");
    PyObject* pModule = PyImport_Import(pName);

    Py_XDECREF(pName);

    if (pModule != NULL) {

        PyObject* pFunc = PyObject_GetAttrString(pModule, "greet");
        if (PyCallable_Check(pFunc)) {

            PyObject* pArgs = PyTuple_Pack(1, PyUnicode_FromString(arg));
            PyObject* pValue = PyObject_CallObject(pFunc, pArgs);
            Py_XDECREF(pArgs);

            if (pValue != NULL) {

                const char *value = PyUnicode_AsUTF8(pValue);
                Py_XDECREF(pValue);

                return value;

            } else {
                PyErr_Print();
                return NULL;
            }
        } else {
            PyErr_Print();
            return NULL;
        }

        Py_XDECREF(pFunc);
        Py_XDECREF(pModule);

    } else {
        PyErr_Print();
        return NULL;
    }

}