#include <Python.h>

int main(int argc, char **argv, char **envp) {

    Py_Initialize();

    PyObject* pTuple = PyTuple_Pack(2, PyUnicode_FromString("Khonello"), PyLong_FromLong(2));
    PyObject* pBuild = Py_BuildValue("[is]", 23, "khonello");

    char* buffer;
    long integral;

    int retval = PyArg_ParseTuple(pTuple, "sl", &buffer, &integral);
    if (retval) {

        PyObject_Print(pBuild, stdout, 0);
        printf("\n%s\t%ld\n", buffer, integral);
    }

    Py_Finalize();
    return 0;
}