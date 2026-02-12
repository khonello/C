#include <Python.h>

// PyCFunction
static int _doNotTouch = 0;

PyObject* _install( PyObject* self, PyObject* arg);         // should be called once

PyObject* foo( PyObject* self, PyObject* arg);
PyObject* bar( PyObject* self, PyObject* arg);

static PyMethodDef methodDef[] = {
    {"install", _install, METH_NOARGS, "install and setup"},
    {"foo", foo, METH_O, "foo function"},
    {"bar", bar, METH_O, "bar function"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef moduleDef = {
    PyModuleDef_HEAD_INIT,
    "module",
    "A simple module",
    0,                     // -1 implies reloading the module wont lead to any problems, 0 implies the other way round
    methodDef
};

int main(int argc, char **argv, char **envp) {

    Py_Initialize();

}

PyMODINIT_FUNC PyInit_module(void) {

    return PyModule_Create(&moduleDef);
}

PyObject* _install(PyObject* self, PyObject* arg) {

    _doNotTouch++;
    const char* format = "%d\n";

    PySys_WriteStdout(format, _doNotTouch);
    Py_RETURN_NONE;
}

PyObject* foo(PyObject* self, PyObject* arg) {

    const char* greeting = "Hello 👋 %s\n";
    
    PySys_WriteStdout(greeting, PyUnicode_AsUTF8(PyObject_Str(arg)));
    Py_RETURN_NONE;
}

PyObject* bar(PyObject* self, PyObject* arg) {

    const char* greeting = "Hi 👋 %s\n";
    
    PySys_WriteStdout(greeting, PyUnicode_AsUTF8(PyObject_Str(arg)));
    Py_RETURN_NONE;
}