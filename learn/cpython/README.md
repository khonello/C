CPython-API

Categories

1. Objects
	i. PyObject
	ii.PyFunctionObject
       iii.PyMethodObject
       iii.PyTypeObject									// All object types ( ie. PyFunction_Type, PyMethod_Type ) are modification the PyTypeObject

1. String Handling
	i. PyUnicode_DecodeFSDefault( const char * );					// convert a c string into a python unicode object, it takes into account the filesystem
	ii.PyUnicode_DecodeUTF8( const char *, Py_ssize_t, const char *); 		// convert c utf-8 into a python unicode object
       iii.PyUnicode_FromString( const char * );					// converts c string into python unicode object
       iv. PyUnicode_AsUTF8( PyObject * ); 						// provides a c utf-8 representation of the python object

2. Working with Module
	i. PyImport_Import( PyObject * );						// import module

3. Attribute Handling
	i. PyObject_GetAttrString( PyObject *, const char * );				// it is used to get an attribute from a Python object using c string
	ii.PyObject_GetAttr(PyObject *, PyObject * );					// it is used to get an attribute from a Python object using an object
       iii.PyObject_GetItem(PyObject *, PyObject * );					// it is used to get an item from a Python object using a key ( ie. list, dict ... )
       iv. PyObject_GetIter(PyObject * );						// it returns an iterator for a Python object, which can be used to iterate over its elements
       vi. PyObject_SetAttrString(PyObject *, const char *, PyObject * );		// It is used to set an attr string on a Python Object

4. Iterable Handling
	i. PyTuple_Pack(Py_ssize_t, ... );						// It is used to create a new tuple object from a variable number of arguments
	ii.PyArg_ParseTuple(PyObject *, const char* , ... );				// It is used to unpack the elements of a tuple into variables
       iii.PyList_New(Py_ssize_t );							// It is used to create a new list object
       iv. PyList_Size( PyObject * );
	v. PyList_GetItem( PyObject *, Py_ssize_t );
       vi. PyDict_New( void );
       vii.PyDict_SetItemString( PyObject *, const char *, PyObject * );
      viii.Py_BuildValue( const char *, ... );						// It is used to create a python datastruture by specifying the structure and values ( ie. [id] ) returns list of int and double

5. Callable Handling
	i. PyCallable_Check(PyObject * );						// It is used to check if a Python object is callable
	ii.PyObject_CallObject(PyObject *, PyObject * );				// It is used to call a callable Python object with arguments
       iii.PyObject_CallFunction(PyObject *, const char *, ... );			// It is used to call a callable Python object with a variable number of arguments
       iv. PyObject_CallFunctionObjArgs(PyObject *, ... , NULL );			// It is used to call a callable Python object with a variable number of arguments, it must end with a NULL sentinel
        v. PyObject_CallMethod(PyObject *, const char *, const char *, ... );		// It is used to call a method on a Python object with a variable number of arguments

6. Utils
	i. PyErr_Print( void )								// print error message
	ii.PyObject_Print( PyObject *, File *, size_t );				// print python object to file
       iii.PyRun_SimpleString( const char * );
	iv.Py_TYPE( PyObject * );

7. Macros
	i. Py_INCREF( PyObject * );
	ii.Py_DECREF( PyObject * );
       iii.Py_XDECREF( PyObject * );
       iv. Py_CLEAR( PyObject * );
	v. Py_RETURN_NONE
	vi.Py_RETURN_FALSE
       vii.Py_RETURN_TRUE
