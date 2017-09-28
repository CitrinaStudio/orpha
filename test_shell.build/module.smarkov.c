/* Generated code for Python source for module 'smarkov'
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

/* The _module_smarkov is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_smarkov;
PyDictObject *moduledict_smarkov;

/* The module constants used, if any. */
extern PyObject *const_str_plain___file__;
static PyObject *const_list_str_digest_3d080dcadcaf5d9854ab56e06c61edda_list;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_45e29b9c91856cbf6dd747fe984f217d;
extern PyObject *const_str_plain_smarkov;
static PyObject *const_str_digest_3d080dcadcaf5d9854ab56e06c61edda;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_markov;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_str_plain_Markov_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_list_str_plain_markov_list;
extern PyObject *const_str_plain_Markov;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_empty;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_str_digest_3d080dcadcaf5d9854ab56e06c61edda_list = PyList_New( 1 );
    const_str_digest_3d080dcadcaf5d9854ab56e06c61edda = UNSTREAM_STRING( &constant_bin[ 1574645 ], 40, 0 );
    PyList_SET_ITEM( const_list_str_digest_3d080dcadcaf5d9854ab56e06c61edda_list, 0, const_str_digest_3d080dcadcaf5d9854ab56e06c61edda ); Py_INCREF( const_str_digest_3d080dcadcaf5d9854ab56e06c61edda );
    const_str_digest_45e29b9c91856cbf6dd747fe984f217d = UNSTREAM_STRING( &constant_bin[ 1574685 ], 52, 0 );
    const_tuple_str_plain_Markov_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Markov_tuple, 0, const_str_plain_Markov ); Py_INCREF( const_str_plain_Markov );
    const_list_str_plain_markov_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_markov_list, 0, const_str_plain_markov ); Py_INCREF( const_str_plain_markov );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_smarkov( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_56e41994da4d01dbb7b81a122daaf719;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_45e29b9c91856cbf6dd747fe984f217d;
    codeobj_56e41994da4d01dbb7b81a122daaf719 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_smarkov, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_smarkov =
{
    PyModuleDef_HEAD_INIT,
    "smarkov",   /* m_name */
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

MOD_INIT_DECL( smarkov )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_smarkov );
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
    puts("smarkov: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("smarkov: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initsmarkov" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_smarkov = Py_InitModule4(
        "smarkov",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_smarkov = PyModule_Create( &mdef_smarkov );
#endif

    moduledict_smarkov = (PyDictObject *)((PyModuleObject *)module_smarkov)->md_dict;

    CHECK_OBJECT( module_smarkov );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_smarkov, module_smarkov );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_smarkov );

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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_56e41994da4d01dbb7b81a122daaf719;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_smarkov, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_45e29b9c91856cbf6dd747fe984f217d;
    UPDATE_STRING_DICT0( moduledict_smarkov, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_3d080dcadcaf5d9854ab56e06c61edda_list );
    UPDATE_STRING_DICT1( moduledict_smarkov, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_smarkov, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_smarkov;
    UPDATE_STRING_DICT0( moduledict_smarkov, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_str_plain_markov_list );
    UPDATE_STRING_DICT1( moduledict_smarkov, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    // Frame without reuse.
    frame_56e41994da4d01dbb7b81a122daaf719 = MAKE_MODULE_FRAME( codeobj_56e41994da4d01dbb7b81a122daaf719, module_smarkov );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_56e41994da4d01dbb7b81a122daaf719 );
    assert( Py_REFCNT( frame_56e41994da4d01dbb7b81a122daaf719 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_markov;
    tmp_globals_name_1 = ((PyModuleObject *)module_smarkov)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Markov_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_56e41994da4d01dbb7b81a122daaf719->m_frame.f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Markov );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_smarkov, (Nuitka_StringObject *)const_str_plain_Markov, tmp_assign_source_7 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_56e41994da4d01dbb7b81a122daaf719 );
#endif
    popFrameStack();

    assertFrameObject( frame_56e41994da4d01dbb7b81a122daaf719 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_56e41994da4d01dbb7b81a122daaf719 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_56e41994da4d01dbb7b81a122daaf719, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_56e41994da4d01dbb7b81a122daaf719->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_56e41994da4d01dbb7b81a122daaf719, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_smarkov );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
