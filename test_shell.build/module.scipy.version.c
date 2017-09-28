/* Generated code for Python source for module 'scipy.version'
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

/* The _module_scipy$version is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$version;
PyDictObject *moduledict_scipy$version;

/* The module constants used, if any. */
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_03b1092cf0e0bdebcbe98a44d289208a1e597416;
extern PyObject *const_str_plain_release;
extern PyObject *const_str_plain_scipy;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_short_version;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_digest_870fc2c777879f90261e5a20709f9ca5;
extern PyObject *const_str_plain_git_revision;
extern PyObject *const_str_plain_full_version;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_0513e970c46b187afdc523824d0a6545;
static PyObject *const_str_digest_1764308c9d3cc9de095a381561cb02fa;
extern PyObject *const_str_plain_version;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_03b1092cf0e0bdebcbe98a44d289208a1e597416 = UNSTREAM_STRING( &constant_bin[ 1569038 ], 40, 0 );
    const_str_digest_0513e970c46b187afdc523824d0a6545 = UNSTREAM_STRING( &constant_bin[ 1569078 ], 49, 0 );
    const_str_digest_1764308c9d3cc9de095a381561cb02fa = UNSTREAM_STRING( &constant_bin[ 1569127 ], 6, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$version( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$version =
{
    PyModuleDef_HEAD_INIT,
    "scipy.version",   /* m_name */
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

MOD_INIT_DECL( scipy$version )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$version );
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
    puts("scipy.version: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.version: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$version" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$version = Py_InitModule4(
        "scipy.version",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$version = PyModule_Create( &mdef_scipy$version );
#endif

    moduledict_scipy$version = (PyDictObject *)((PyModuleObject *)module_scipy$version)->md_dict;

    CHECK_OBJECT( module_scipy$version );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_870fc2c777879f90261e5a20709f9ca5, module_scipy$version );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$version );

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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_scipy$version, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_0513e970c46b187afdc523824d0a6545;
    UPDATE_STRING_DICT0( moduledict_scipy$version, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_scipy$version, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_scipy;
    UPDATE_STRING_DICT0( moduledict_scipy$version, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_1764308c9d3cc9de095a381561cb02fa;
    UPDATE_STRING_DICT0( moduledict_scipy$version, (Nuitka_StringObject *)const_str_plain_short_version, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_1764308c9d3cc9de095a381561cb02fa;
    UPDATE_STRING_DICT0( moduledict_scipy$version, (Nuitka_StringObject *)const_str_plain_version, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_1764308c9d3cc9de095a381561cb02fa;
    UPDATE_STRING_DICT0( moduledict_scipy$version, (Nuitka_StringObject *)const_str_plain_full_version, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_plain_03b1092cf0e0bdebcbe98a44d289208a1e597416;
    UPDATE_STRING_DICT0( moduledict_scipy$version, (Nuitka_StringObject *)const_str_plain_git_revision, tmp_assign_source_8 );
    tmp_assign_source_9 = Py_True;
    UPDATE_STRING_DICT0( moduledict_scipy$version, (Nuitka_StringObject *)const_str_plain_release, tmp_assign_source_9 );

    return MOD_RETURN_VALUE( module_scipy$version );
}
