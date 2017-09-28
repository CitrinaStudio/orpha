/* Generated code for Python source for module 'packaging.__about__'
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

/* The _module_packaging$__about__ is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_packaging$__about__;
PyDictObject *moduledict_packaging$__about__;

/* The module constants used, if any. */
extern PyObject *const_str_plain___copyright__;
static PyObject *const_str_digest_983fc705caa3f427e09b821a1e270e4d;
static PyObject *const_str_digest_05e8c38d628b3aba8abcc5d43ea8d8ea;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_6326b6d87157f82daf2429ac4413ebaf_tuple;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___summary__;
extern PyObject *const_str_plain___about__;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_894ad454fad7a3546de1b3ebcc4ddb55;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
extern PyObject *const_list_b5215a344cdfe40170e16c947ed7b43b_list;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___email__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_packaging;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___uri__;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain___license__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___title__;
static PyObject *const_str_digest_24af0d29525b682afb17c2d2cf4f025f;
static PyObject *const_str_digest_d4542d2880d54a4b54551867fac03d07;
static PyObject *const_str_digest_43f96eca3406fd8074d16bbbe21aef95;
static PyObject *const_str_digest_e102fcc27d439009a0cbc27e7dee5d68;
static PyObject *const_str_digest_a00e85df505e2e4a9a66e0e515960ed4;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_7e8039b2a5190b84eaba8e3668438234;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_983fc705caa3f427e09b821a1e270e4d = UNSTREAM_STRING( &constant_bin[ 1561202 ], 34, 0 );
    const_str_digest_05e8c38d628b3aba8abcc5d43ea8d8ea = UNSTREAM_STRING( &constant_bin[ 1561236 ], 33, 0 );
    const_str_digest_894ad454fad7a3546de1b3ebcc4ddb55 = UNSTREAM_STRING( &constant_bin[ 1561269 ], 61, 0 );
    const_str_digest_24af0d29525b682afb17c2d2cf4f025f = UNSTREAM_STRING( &constant_bin[ 1561330 ], 4, 0 );
    const_str_digest_d4542d2880d54a4b54551867fac03d07 = UNSTREAM_STRING( &constant_bin[ 1561334 ], 34, 0 );
    const_str_digest_43f96eca3406fd8074d16bbbe21aef95 = UNSTREAM_STRING( &constant_bin[ 1561368 ], 16, 0 );
    const_str_digest_e102fcc27d439009a0cbc27e7dee5d68 = UNSTREAM_STRING( &constant_bin[ 1561384 ], 19, 0 );
    const_str_digest_a00e85df505e2e4a9a66e0e515960ed4 = UNSTREAM_STRING( &constant_bin[ 1561403 ], 55, 0 );
    const_str_digest_7e8039b2a5190b84eaba8e3668438234 = UNSTREAM_STRING( &constant_bin[ 1561289 ], 41, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_packaging$__about__( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e195d819983a1a26c17a91584182a037;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_a00e85df505e2e4a9a66e0e515960ed4;
    codeobj_e195d819983a1a26c17a91584182a037 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___about__, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_packaging$__about__ =
{
    PyModuleDef_HEAD_INIT,
    "packaging.__about__",   /* m_name */
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

MOD_INIT_DECL( packaging$__about__ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_packaging$__about__ );
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
    puts("packaging.__about__: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("packaging.__about__: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpackaging$__about__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_packaging$__about__ = Py_InitModule4(
        "packaging.__about__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_packaging$__about__ = PyModule_Create( &mdef_packaging$__about__ );
#endif

    moduledict_packaging$__about__ = (PyDictObject *)((PyModuleObject *)module_packaging$__about__)->md_dict;

    CHECK_OBJECT( module_packaging$__about__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e102fcc27d439009a0cbc27e7dee5d68, module_packaging$__about__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_packaging$__about__ );

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
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_e195d819983a1a26c17a91584182a037;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_a00e85df505e2e4a9a66e0e515960ed4;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_packaging;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_e195d819983a1a26c17a91584182a037 = MAKE_MODULE_FRAME( codeobj_e195d819983a1a26c17a91584182a037, module_packaging$__about__ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e195d819983a1a26c17a91584182a037 );
    assert( Py_REFCNT( frame_e195d819983a1a26c17a91584182a037 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain___future__;
    tmp_globals_name_1 = ((PyModuleObject *)module_packaging$__about__)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_6326b6d87157f82daf2429ac4413ebaf_tuple;
    tmp_level_name_1 = const_int_0;
    frame_e195d819983a1a26c17a91584182a037->m_frame.f_lineno = 4;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_5;


    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e195d819983a1a26c17a91584182a037 );
#endif
    popFrameStack();

    assertFrameObject( frame_e195d819983a1a26c17a91584182a037 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e195d819983a1a26c17a91584182a037 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e195d819983a1a26c17a91584182a037, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e195d819983a1a26c17a91584182a037->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e195d819983a1a26c17a91584182a037, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    assert( tmp_assign_source_6 != NULL );
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_assign_source_7 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    assert( tmp_assign_source_7 != NULL );
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_7 );
    tmp_assign_source_8 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    assert( tmp_assign_source_8 != NULL );
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_8 );
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_assign_source_9 = LIST_COPY( const_list_b5215a344cdfe40170e16c947ed7b43b_list );
    UPDATE_STRING_DICT1( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    tmp_assign_source_10 = const_str_plain_packaging;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_10 );
    tmp_assign_source_11 = const_str_digest_983fc705caa3f427e09b821a1e270e4d;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___summary__, tmp_assign_source_11 );
    tmp_assign_source_12 = const_str_digest_05e8c38d628b3aba8abcc5d43ea8d8ea;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___uri__, tmp_assign_source_12 );
    tmp_assign_source_13 = const_str_digest_24af0d29525b682afb17c2d2cf4f025f;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_13 );
    tmp_assign_source_14 = const_str_digest_7e8039b2a5190b84eaba8e3668438234;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_14 );
    tmp_assign_source_15 = const_str_digest_43f96eca3406fd8074d16bbbe21aef95;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___email__, tmp_assign_source_15 );
    tmp_assign_source_16 = const_str_digest_d4542d2880d54a4b54551867fac03d07;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_16 );
    tmp_assign_source_17 = const_str_digest_894ad454fad7a3546de1b3ebcc4ddb55;
    UPDATE_STRING_DICT0( moduledict_packaging$__about__, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_17 );

    return MOD_RETURN_VALUE( module_packaging$__about__ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
