/* Generated code for Python source for module 'colorama'
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

/* The _module_colorama is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_colorama;
PyDictObject *moduledict_colorama;

/* The module constants used, if any. */
extern PyObject *const_str_plain_Back;
extern PyObject *const_str_plain___package__;
static PyObject *const_tuple_59b9584e376478b0265443039aa0d934_tuple;
static PyObject *const_str_digest_ba80a0845e3f3de1c9129c98c13249b6;
extern PyObject *const_str_plain_colorama_text;
static PyObject *const_str_digest_1be582dcdef1f849c6473cb14728f92d;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_str_plain_AnsiToWin32_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_initialise;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_ansitowin32;
extern PyObject *const_str_plain_ansi;
extern PyObject *const_str_plain_init;
static PyObject *const_list_str_digest_1be582dcdef1f849c6473cb14728f92d_list;
extern PyObject *const_str_plain_reinit;
static PyObject *const_tuple_907aa1bd00112484c9b8a4fb41097488_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_Fore;
extern PyObject *const_str_plain_AnsiToWin32;
static PyObject *const_str_digest_68f948ed9d79861534d30f87a0ff83cc;
extern PyObject *const_str_plain_Cursor;
extern PyObject *const_str_plain_Style;
extern PyObject *const_str_plain_colorama;
extern PyObject *const_str_plain_deinit;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_59b9584e376478b0265443039aa0d934_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_59b9584e376478b0265443039aa0d934_tuple, 0, const_str_plain_Fore ); Py_INCREF( const_str_plain_Fore );
    PyTuple_SET_ITEM( const_tuple_59b9584e376478b0265443039aa0d934_tuple, 1, const_str_plain_Back ); Py_INCREF( const_str_plain_Back );
    PyTuple_SET_ITEM( const_tuple_59b9584e376478b0265443039aa0d934_tuple, 2, const_str_plain_Style ); Py_INCREF( const_str_plain_Style );
    PyTuple_SET_ITEM( const_tuple_59b9584e376478b0265443039aa0d934_tuple, 3, const_str_plain_Cursor ); Py_INCREF( const_str_plain_Cursor );
    const_str_digest_ba80a0845e3f3de1c9129c98c13249b6 = UNSTREAM_STRING( &constant_bin[ 13035 ], 53, 0 );
    const_str_digest_1be582dcdef1f849c6473cb14728f92d = UNSTREAM_STRING( &constant_bin[ 13035 ], 41, 0 );
    const_list_str_digest_1be582dcdef1f849c6473cb14728f92d_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_1be582dcdef1f849c6473cb14728f92d_list, 0, const_str_digest_1be582dcdef1f849c6473cb14728f92d ); Py_INCREF( const_str_digest_1be582dcdef1f849c6473cb14728f92d );
    const_tuple_907aa1bd00112484c9b8a4fb41097488_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_907aa1bd00112484c9b8a4fb41097488_tuple, 0, const_str_plain_init ); Py_INCREF( const_str_plain_init );
    PyTuple_SET_ITEM( const_tuple_907aa1bd00112484c9b8a4fb41097488_tuple, 1, const_str_plain_deinit ); Py_INCREF( const_str_plain_deinit );
    PyTuple_SET_ITEM( const_tuple_907aa1bd00112484c9b8a4fb41097488_tuple, 2, const_str_plain_reinit ); Py_INCREF( const_str_plain_reinit );
    PyTuple_SET_ITEM( const_tuple_907aa1bd00112484c9b8a4fb41097488_tuple, 3, const_str_plain_colorama_text ); Py_INCREF( const_str_plain_colorama_text );
    const_str_digest_68f948ed9d79861534d30f87a0ff83cc = UNSTREAM_STRING( &constant_bin[ 13088 ], 5, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_colorama( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_cf3185400628fd282f71ce28e7867d52;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ba80a0845e3f3de1c9129c98c13249b6;
    codeobj_cf3185400628fd282f71ce28e7867d52 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_colorama, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_colorama =
{
    PyModuleDef_HEAD_INIT,
    "colorama",   /* m_name */
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

MOD_INIT_DECL( colorama )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_colorama );
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
    puts("colorama: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("colorama: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcolorama" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_colorama = Py_InitModule4(
        "colorama",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_colorama = PyModule_Create( &mdef_colorama );
#endif

    moduledict_colorama = (PyDictObject *)((PyModuleObject *)module_colorama)->md_dict;

    CHECK_OBJECT( module_colorama );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_colorama, module_colorama );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_colorama );

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
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
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
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    struct Nuitka_FrameObject *frame_cf3185400628fd282f71ce28e7867d52;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ba80a0845e3f3de1c9129c98c13249b6;
    UPDATE_STRING_DICT0( moduledict_colorama, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_1be582dcdef1f849c6473cb14728f92d_list );
    UPDATE_STRING_DICT1( moduledict_colorama, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_colorama;
    UPDATE_STRING_DICT0( moduledict_colorama, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_cf3185400628fd282f71ce28e7867d52 = MAKE_MODULE_FRAME( codeobj_cf3185400628fd282f71ce28e7867d52, module_colorama );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_cf3185400628fd282f71ce28e7867d52 );
    assert( Py_REFCNT( frame_cf3185400628fd282f71ce28e7867d52 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_initialise;
    tmp_globals_name_1 = ((PyModuleObject *)module_colorama)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_907aa1bd00112484c9b8a4fb41097488_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_cf3185400628fd282f71ce28e7867d52->m_frame.f_lineno = 2;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_6;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_init );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama, (Nuitka_StringObject *)const_str_plain_init, tmp_assign_source_7 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_deinit );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama, (Nuitka_StringObject *)const_str_plain_deinit, tmp_assign_source_8 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_reinit );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama, (Nuitka_StringObject *)const_str_plain_reinit, tmp_assign_source_9 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_colorama_text );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama, (Nuitka_StringObject *)const_str_plain_colorama_text, tmp_assign_source_10 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_2 = const_str_plain_ansi;
    tmp_globals_name_2 = ((PyModuleObject *)module_colorama)->md_dict;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_59b9584e376478b0265443039aa0d934_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_cf3185400628fd282f71ce28e7867d52->m_frame.f_lineno = 3;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Fore );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_colorama, (Nuitka_StringObject *)const_str_plain_Fore, tmp_assign_source_12 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Back );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_colorama, (Nuitka_StringObject *)const_str_plain_Back, tmp_assign_source_13 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Style );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_colorama, (Nuitka_StringObject *)const_str_plain_Style, tmp_assign_source_14 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Cursor );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_colorama, (Nuitka_StringObject *)const_str_plain_Cursor, tmp_assign_source_15 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_3 = const_str_plain_ansitowin32;
    tmp_globals_name_3 = ((PyModuleObject *)module_colorama)->md_dict;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_AnsiToWin32_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_cf3185400628fd282f71ce28e7867d52->m_frame.f_lineno = 4;
    tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_AnsiToWin32 );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama, (Nuitka_StringObject *)const_str_plain_AnsiToWin32, tmp_assign_source_16 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf3185400628fd282f71ce28e7867d52 );
#endif
    popFrameStack();

    assertFrameObject( frame_cf3185400628fd282f71ce28e7867d52 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf3185400628fd282f71ce28e7867d52 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cf3185400628fd282f71ce28e7867d52, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cf3185400628fd282f71ce28e7867d52->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cf3185400628fd282f71ce28e7867d52, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_17 = const_str_digest_68f948ed9d79861534d30f87a0ff83cc;
    UPDATE_STRING_DICT0( moduledict_colorama, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_17 );

    return MOD_RETURN_VALUE( module_colorama );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
