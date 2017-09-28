/* Generated code for Python source for module 'scipy._lib'
 * created by Nuitka version 0.5.27
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_scipy$_lib is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$_lib;
PyDictObject *moduledict_scipy$_lib;

/* The module constants used, if any. */
extern PyObject *const_str_plain__lib;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain___future__;
static PyObject *const_str_digest_6954aaf16724df7b934ae9667dbd026d;
extern PyObject *const_tuple_str_plain_Tester_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_Tester;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_60483841c8ffb87fef517f2a7494e990;
extern PyObject *const_str_digest_ae994b87bb7a9b24968c74c3269a16aa;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
static PyObject *const_list_str_digest_6954aaf16724df7b934ae9667dbd026d_list;
extern PyObject *const_str_digest_d58f9dcbfd7bfe5cf48372dc1e7e72a9;
static PyObject *const_str_digest_62a1d126f5f5689a7ed562ab720e3387;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_6954aaf16724df7b934ae9667dbd026d = UNSTREAM_STRING( &constant_bin[ 1564205 ], 43, 0 );
    const_str_digest_60483841c8ffb87fef517f2a7494e990 = UNSTREAM_STRING( &constant_bin[ 1564248 ], 55, 0 );
    const_list_str_digest_6954aaf16724df7b934ae9667dbd026d_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_6954aaf16724df7b934ae9667dbd026d_list, 0, const_str_digest_6954aaf16724df7b934ae9667dbd026d ); Py_INCREF( const_str_digest_6954aaf16724df7b934ae9667dbd026d );
    const_str_digest_62a1d126f5f5689a7ed562ab720e3387 = UNSTREAM_STRING( &constant_bin[ 1564303 ], 253, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$_lib( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2963ecf65c5888c4cdffac20b750ff3e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_60483841c8ffb87fef517f2a7494e990;
    codeobj_2963ecf65c5888c4cdffac20b750ff3e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__lib, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$_lib =
{
    PyModuleDef_HEAD_INIT,
    "scipy._lib",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( scipy$_lib )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$_lib );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy._lib: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy._lib: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$_lib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$_lib = Py_InitModule4(
        "scipy._lib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$_lib = PyModule_Create( &mdef_scipy$_lib );
#endif

    moduledict_scipy$_lib = (PyDictObject *)((PyModuleObject *)module_scipy$_lib)->md_dict;

    CHECK_OBJECT( module_scipy$_lib );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d58f9dcbfd7bfe5cf48372dc1e7e72a9, module_scipy$_lib );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$_lib );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_called_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_source_name_1;
    struct Nuitka_FrameObject *frame_2963ecf65c5888c4cdffac20b750ff3e;


    // Module code.
    tmp_assign_source_1 = const_str_digest_62a1d126f5f5689a7ed562ab720e3387;
    UPDATE_STRING_DICT0( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_60483841c8ffb87fef517f2a7494e990;
    UPDATE_STRING_DICT0( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_6954aaf16724df7b934ae9667dbd026d_list );
    UPDATE_STRING_DICT1( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_d58f9dcbfd7bfe5cf48372dc1e7e72a9;
    UPDATE_STRING_DICT0( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_2963ecf65c5888c4cdffac20b750ff3e = MAKE_MODULE_FRAME( codeobj_2963ecf65c5888c4cdffac20b750ff3e, module_scipy$_lib );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2963ecf65c5888c4cdffac20b750ff3e );
    assert( Py_REFCNT( frame_2963ecf65c5888c4cdffac20b750ff3e ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain___future__;
    tmp_globals_name_1 = ((PyModuleObject *)module_scipy$_lib)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
    tmp_level_name_1 = const_int_0;
    frame_2963ecf65c5888c4cdffac20b750ff3e->m_frame.f_lineno = 12;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_6;

    tmp_assign_source_7 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    assert( tmp_assign_source_7 != NULL );
    UPDATE_STRING_DICT0( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_7 );
    tmp_assign_source_8 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    assert( tmp_assign_source_8 != NULL );
    UPDATE_STRING_DICT0( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_8 );
    tmp_assign_source_9 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    assert( tmp_assign_source_9 != NULL );
    UPDATE_STRING_DICT0( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_9 );
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_2 = const_str_digest_ae994b87bb7a9b24968c74c3269a16aa;
    tmp_globals_name_2 = ((PyModuleObject *)module_scipy$_lib)->md_dict;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_Tester_tuple;
    tmp_level_name_2 = const_int_0;
    frame_2963ecf65c5888c4cdffac20b750ff3e->m_frame.f_lineno = 14;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Tester );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain_Tester, tmp_assign_source_10 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tester" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 15;

        goto frame_exception_exit_1;
    }

    frame_2963ecf65c5888c4cdffac20b750ff3e->m_frame.f_lineno = 15;
    tmp_source_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_test );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_11 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2963ecf65c5888c4cdffac20b750ff3e );
#endif
    popFrameStack();

    assertFrameObject( frame_2963ecf65c5888c4cdffac20b750ff3e );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2963ecf65c5888c4cdffac20b750ff3e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2963ecf65c5888c4cdffac20b750ff3e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2963ecf65c5888c4cdffac20b750ff3e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2963ecf65c5888c4cdffac20b750ff3e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_scipy$_lib );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
