/* Generated code for Python source for module 'inside'
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

/* The _module_inside is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_inside;
PyDictObject *moduledict_inside;

/* The module constants used, if any. */
static PyObject *const_str_digest_e8d6ae030067da327808db605e1d9849;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_d01d227f161621d46787e40c22a8af95;
extern PyObject *const_str_digest_92e7dfbaeed3fe8b6fd491d948facc99;
extern PyObject *const_str_plain_inside;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_abd674f6b2d1eb0a46683d38501da8b9;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_digest_2afcba803cda5e8512ef7fa0167019e3;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_ab05befbc1659e0e7361623610a15956;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_digest_8700c292f8c441a0e260da4cf368daec;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___doc__;
static PyObject *const_list_str_digest_e8d6ae030067da327808db605e1d9849_list;
static PyObject *const_str_digest_a1d43dff004732360a1ba59a04543ffe;
extern PyObject *const_str_digest_819ed5639fc0f88851294d1c42d747bc;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_e8d6ae030067da327808db605e1d9849 = UNSTREAM_STRING( &constant_bin[ 17351 ], 38, 0 );
    const_str_digest_abd674f6b2d1eb0a46683d38501da8b9 = UNSTREAM_STRING( &constant_bin[ 17389 ], 13, 0 );
    const_list_str_digest_e8d6ae030067da327808db605e1d9849_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_e8d6ae030067da327808db605e1d9849_list, 0, const_str_digest_e8d6ae030067da327808db605e1d9849 ); Py_INCREF( const_str_digest_e8d6ae030067da327808db605e1d9849 );
    const_str_digest_a1d43dff004732360a1ba59a04543ffe = UNSTREAM_STRING( &constant_bin[ 17402 ], 50, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_inside( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e7de4685166f2cf56f69a3293187d497;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_a1d43dff004732360a1ba59a04543ffe;
    codeobj_e7de4685166f2cf56f69a3293187d497 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_inside, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_inside =
{
    PyModuleDef_HEAD_INIT,
    "inside",   /* m_name */
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

MOD_INIT_DECL( inside )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_inside );
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
    puts("inside: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("inside: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initinside" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_inside = Py_InitModule4(
        "inside",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_inside = PyModule_Create( &mdef_inside );
#endif

    moduledict_inside = (PyDictObject *)((PyModuleObject *)module_inside)->md_dict;

    CHECK_OBJECT( module_inside );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_inside, module_inside );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_inside );

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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    struct Nuitka_FrameObject *frame_e7de4685166f2cf56f69a3293187d497;


    // Module code.
    tmp_assign_source_1 = const_str_digest_abd674f6b2d1eb0a46683d38501da8b9;
    UPDATE_STRING_DICT0( moduledict_inside, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_a1d43dff004732360a1ba59a04543ffe;
    UPDATE_STRING_DICT0( moduledict_inside, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_e8d6ae030067da327808db605e1d9849_list );
    UPDATE_STRING_DICT1( moduledict_inside, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_inside, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_inside;
    UPDATE_STRING_DICT0( moduledict_inside, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_e7de4685166f2cf56f69a3293187d497 = MAKE_MODULE_FRAME( codeobj_e7de4685166f2cf56f69a3293187d497, module_inside );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e7de4685166f2cf56f69a3293187d497 );
    assert( Py_REFCNT( frame_e7de4685166f2cf56f69a3293187d497 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_2afcba803cda5e8512ef7fa0167019e3;
    tmp_globals_name_1 = ((PyModuleObject *)module_inside)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_e7de4685166f2cf56f69a3293187d497->m_frame.f_lineno = 3;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_inside, (Nuitka_StringObject *)const_str_plain_inside, tmp_assign_source_6 );
    tmp_name_name_2 = const_str_digest_819ed5639fc0f88851294d1c42d747bc;
    tmp_globals_name_2 = ((PyModuleObject *)module_inside)->md_dict;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_e7de4685166f2cf56f69a3293187d497->m_frame.f_lineno = 4;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_inside, (Nuitka_StringObject *)const_str_plain_inside, tmp_assign_source_7 );
    tmp_name_name_3 = const_str_digest_ab05befbc1659e0e7361623610a15956;
    tmp_globals_name_3 = ((PyModuleObject *)module_inside)->md_dict;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_e7de4685166f2cf56f69a3293187d497->m_frame.f_lineno = 5;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_inside, (Nuitka_StringObject *)const_str_plain_inside, tmp_assign_source_8 );
    tmp_name_name_4 = const_str_digest_d01d227f161621d46787e40c22a8af95;
    tmp_globals_name_4 = ((PyModuleObject *)module_inside)->md_dict;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_e7de4685166f2cf56f69a3293187d497->m_frame.f_lineno = 6;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_inside, (Nuitka_StringObject *)const_str_plain_inside, tmp_assign_source_9 );
    tmp_name_name_5 = const_str_digest_8700c292f8c441a0e260da4cf368daec;
    tmp_globals_name_5 = ((PyModuleObject *)module_inside)->md_dict;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    tmp_level_name_5 = const_int_0;
    frame_e7de4685166f2cf56f69a3293187d497->m_frame.f_lineno = 7;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_inside, (Nuitka_StringObject *)const_str_plain_inside, tmp_assign_source_10 );
    tmp_name_name_6 = const_str_digest_92e7dfbaeed3fe8b6fd491d948facc99;
    tmp_globals_name_6 = ((PyModuleObject *)module_inside)->md_dict;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = Py_None;
    tmp_level_name_6 = const_int_0;
    frame_e7de4685166f2cf56f69a3293187d497->m_frame.f_lineno = 8;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_inside, (Nuitka_StringObject *)const_str_plain_inside, tmp_assign_source_11 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e7de4685166f2cf56f69a3293187d497 );
#endif
    popFrameStack();

    assertFrameObject( frame_e7de4685166f2cf56f69a3293187d497 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e7de4685166f2cf56f69a3293187d497 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e7de4685166f2cf56f69a3293187d497, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e7de4685166f2cf56f69a3293187d497->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e7de4685166f2cf56f69a3293187d497, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_inside );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
