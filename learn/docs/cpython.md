# CPython C API

Programs demonstrating how to embed Python in C and extend Python with C.

## 01-embedding

Embedding the Python interpreter inside a C program.

```
cd cpython/01-embedding
make
./program
```

| File | Covers |
|------|--------|
| `source.c` | Import a Python module and call `greet()` from C |
| `module.py` | Python module with a `greet` function |
| `Makefile` | Links against `libpython3.10` |

## 02-extending

Writing C extension modules that can be imported from Python.

```
cd cpython/02-extending
bash setup.sh
python3 -c "import module"
```

### Source files (src/)

| File | Covers |
|------|--------|
| `class_instance.c` | Creating and calling a Python class instance from C |
| `type_checking.c` | `Py_TYPE` and `PyFunction_Type` comparison |
| `tuple_list_building.c` | `Py_BuildValue`, tuple packing, list creation |
| `list_operations.c` | `PyList_New`, `PyList_Size`, `PyList_GetItem`, slicing |
| `error_handling.c` | `PyErr_SetString`, `PyErr_Print` |
| `extension_module.c` | `PyMethodDef`, `METH_O`, module initialization |

### Support files

| File | Purpose |
|------|---------|
| `learn_module.py` | `Info` class and `bar()` function used by the C sources |
| `setup.py` | `setuptools` config for building the extension |
| `setup.sh` | Shell script to invoke `setup.py build` |

## Quick API Reference

See `cpython/README.md` for the full reference. Summary of key categories:

| Category | Key Functions |
|----------|--------------|
| String Handling | `PyUnicode_FromString`, `PyUnicode_AsUTF8` |
| Modules | `PyImport_Import` |
| Attributes | `PyObject_GetAttrString`, `PyObject_SetAttrString` |
| Iterables | `PyTuple_Pack`, `PyList_New`, `Py_BuildValue` |
| Callables | `PyObject_CallObject`, `PyObject_CallFunction` |
| Ref Counting | `Py_INCREF`, `Py_DECREF`, `Py_CLEAR` |
