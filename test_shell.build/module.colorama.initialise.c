/* Generated code for Python source for module 'colorama.initialise'
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

/* The _module_colorama$initialise is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_colorama$initialise;
PyDictObject *moduledict_colorama$initialise;

/* The module constants used, if any. */
static PyObject *const_tuple_b606439de20329d1b378141bdd1d0460_tuple;
static PyObject *const_str_plain_wrapped_stdout;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_contextmanager;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_colorama_text;
static PyObject *const_str_digest_ccef2723d82eb6f96393b9a051c5f85c;
extern PyObject *const_str_plain_stream;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_tuple_str_plain_AnsiToWin32_tuple;
static PyObject *const_str_plain_orig_stderr;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_initialise;
extern PyObject *const_str_plain_args;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ansitowin32;
extern PyObject *const_str_plain_any;
static PyObject *const_str_plain_wrapped_stderr;
static PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_register;
static PyObject *const_str_plain_orig_stdout;
static PyObject *const_str_digest_c5005d46a461d24f0a3f76fbb5a3b5f0;
extern PyObject *const_str_plain_init;
static PyObject *const_str_plain_atexit_done;
extern PyObject *const_str_plain_autoreset;
extern PyObject *const_str_plain_reinit;
extern PyObject *const_str_plain_should_wrap;
extern PyObject *const_str_plain_convert;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_wrap;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_AnsiToWin32;
extern PyObject *const_str_plain_reset_all;
extern PyObject *const_str_plain_contextlib;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_plain_stdout;
extern PyObject *const_str_plain_colorama;
static PyObject *const_str_plain_atexit;
static PyObject *const_tuple_false_none_none_true_tuple;
extern PyObject *const_str_plain_deinit;
static PyObject *const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple;
extern PyObject *const_str_plain_wrapper;
static PyObject *const_str_plain_wrap_stream;
static PyObject *const_str_digest_3c23d5986caeba567f5a103584db00f8;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_b606439de20329d1b378141bdd1d0460_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 0, const_str_plain_autoreset ); Py_INCREF( const_str_plain_autoreset );
    PyTuple_SET_ITEM( const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 1, const_str_plain_convert ); Py_INCREF( const_str_plain_convert );
    PyTuple_SET_ITEM( const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 2, const_str_plain_strip ); Py_INCREF( const_str_plain_strip );
    PyTuple_SET_ITEM( const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 3, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    const_str_plain_wrapped_stdout = UNSTREAM_STRING( &constant_bin[ 15119 ], 14, 1 );
    const_str_digest_ccef2723d82eb6f96393b9a051c5f85c = UNSTREAM_STRING( &constant_bin[ 15133 ], 44, 0 );
    const_str_plain_orig_stderr = UNSTREAM_STRING( &constant_bin[ 15177 ], 11, 1 );
    const_str_plain_wrapped_stderr = UNSTREAM_STRING( &constant_bin[ 15188 ], 14, 1 );
    const_tuple_str_plain_args_str_plain_kwargs_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_kwargs_tuple, 1, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_plain_orig_stdout = UNSTREAM_STRING( &constant_bin[ 15202 ], 11, 1 );
    const_str_digest_c5005d46a461d24f0a3f76fbb5a3b5f0 = UNSTREAM_STRING( &constant_bin[ 15213 ], 55, 0 );
    const_str_plain_atexit_done = UNSTREAM_STRING( &constant_bin[ 15268 ], 11, 1 );
    const_str_plain_atexit = UNSTREAM_STRING( &constant_bin[ 15268 ], 6, 1 );
    const_tuple_false_none_none_true_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_false_none_none_true_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_none_true_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_true_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_true_tuple, 3, Py_True ); Py_INCREF( Py_True );
    const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 0, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 1, const_str_plain_convert ); Py_INCREF( const_str_plain_convert );
    PyTuple_SET_ITEM( const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 2, const_str_plain_strip ); Py_INCREF( const_str_plain_strip );
    PyTuple_SET_ITEM( const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 3, const_str_plain_autoreset ); Py_INCREF( const_str_plain_autoreset );
    PyTuple_SET_ITEM( const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 4, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    PyTuple_SET_ITEM( const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 5, const_str_plain_wrapper ); Py_INCREF( const_str_plain_wrapper );
    const_str_plain_wrap_stream = UNSTREAM_STRING( &constant_bin[ 15279 ], 11, 1 );
    const_str_digest_3c23d5986caeba567f5a103584db00f8 = UNSTREAM_STRING( &constant_bin[ 15290 ], 19, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_colorama$initialise( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c6e2b3dd763eeadf86f55011ea7738f1;
static PyCodeObject *codeobj_10f1309e13ea5a637017852d7069a327;
static PyCodeObject *codeobj_d57f1155161e89950dbc66a71d10f4dc;
static PyCodeObject *codeobj_22bb0c303399da14c8282487c093115c;
static PyCodeObject *codeobj_12bd6f2b6650cc4f67392dcc3852da4b;
static PyCodeObject *codeobj_158df9ca5540c44e39096016d23eecdb;
static PyCodeObject *codeobj_28959c29474a1367c29ea1e89c2914e5;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c5005d46a461d24f0a3f76fbb5a3b5f0;
    codeobj_c6e2b3dd763eeadf86f55011ea7738f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_colorama_text, 58, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_10f1309e13ea5a637017852d7069a327 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deinit, 51, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d57f1155161e89950dbc66a71d10f4dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_init, 23, const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_22bb0c303399da14c8282487c093115c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_initialise, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_12bd6f2b6650cc4f67392dcc3852da4b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reinit, 67, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_158df9ca5540c44e39096016d23eecdb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_all, 18, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_28959c29474a1367c29ea1e89c2914e5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrap_stream, 74, const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static void colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_context( struct Nuitka_GeneratorObject *generator );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_1_reset_all(  );


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_2_init( PyObject *defaults );


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_3_deinit(  );


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_4_colorama_text(  );


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_5_reinit(  );


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_6_wrap_stream(  );


// The module function definitions.
static PyObject *impl_colorama$initialise$$$function_1_reset_all( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_isnot_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_158df9ca5540c44e39096016d23eecdb = NULL;

    struct Nuitka_FrameObject *frame_158df9ca5540c44e39096016d23eecdb;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_158df9ca5540c44e39096016d23eecdb, codeobj_158df9ca5540c44e39096016d23eecdb, module_colorama$initialise, 0 );
    frame_158df9ca5540c44e39096016d23eecdb = cache_frame_158df9ca5540c44e39096016d23eecdb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_158df9ca5540c44e39096016d23eecdb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_158df9ca5540c44e39096016d23eecdb ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_AnsiToWin32 );

    if (unlikely( tmp_compare_left_1 == NULL ))
    {
        tmp_compare_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AnsiToWin32 );
    }

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AnsiToWin32" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;

        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_AnsiToWin32 );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AnsiToWin32 );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AnsiToWin32" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stdout );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "orig_stdout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;

        goto frame_exception_exit_1;
    }

    frame_158df9ca5540c44e39096016d23eecdb->m_frame.f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    frame_158df9ca5540c44e39096016d23eecdb->m_frame.f_lineno = 20;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reset_all );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_158df9ca5540c44e39096016d23eecdb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_158df9ca5540c44e39096016d23eecdb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_158df9ca5540c44e39096016d23eecdb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_158df9ca5540c44e39096016d23eecdb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_158df9ca5540c44e39096016d23eecdb, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_158df9ca5540c44e39096016d23eecdb, ""  );

    // Release cached frame.
    if ( frame_158df9ca5540c44e39096016d23eecdb == cache_frame_158df9ca5540c44e39096016d23eecdb )
    {
        Py_DECREF( frame_158df9ca5540c44e39096016d23eecdb );
    }
    cache_frame_158df9ca5540c44e39096016d23eecdb = NULL;

    assertFrameObject( frame_158df9ca5540c44e39096016d23eecdb );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_1_reset_all );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_colorama$initialise$$$function_2_init( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_autoreset = python_pars[ 0 ];
    PyObject *par_convert = python_pars[ 1 ];
    PyObject *par_strip = python_pars[ 2 ];
    PyObject *par_wrap = python_pars[ 3 ];
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d57f1155161e89950dbc66a71d10f4dc = NULL;

    struct Nuitka_FrameObject *frame_d57f1155161e89950dbc66a71d10f4dc;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d57f1155161e89950dbc66a71d10f4dc, codeobj_d57f1155161e89950dbc66a71d10f4dc, module_colorama$initialise, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_d57f1155161e89950dbc66a71d10f4dc = cache_frame_d57f1155161e89950dbc66a71d10f4dc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d57f1155161e89950dbc66a71d10f4dc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d57f1155161e89950dbc66a71d10f4dc ) == 2 ); // Frame stack

    // Framed code:
    tmp_operand_name_1 = par_wrap;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_any );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = PyList_New( 3 );
    tmp_list_element_1 = par_autoreset;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "autoreset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_convert;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "convert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
    tmp_list_element_1 = par_strip;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "strip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 2, tmp_list_element_1 );
    frame_d57f1155161e89950dbc66a71d10f4dc->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 25;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_ccef2723d82eb6f96393b9a051c5f85c;
    frame_d57f1155161e89950dbc66a71d10f4dc->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 26;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stdout );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout, tmp_assign_source_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stderr );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr, tmp_assign_source_2 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_stdout );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout, tmp_assign_source_3 );
    goto branch_end_2;
    branch_no_2:;
    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrap_stream );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_stream );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrap_stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description = "oooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stdout );
    }

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "orig_stdout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description = "oooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = par_convert;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "convert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description = "oooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_4 = par_strip;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "strip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description = "oooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_5 = par_autoreset;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "autoreset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description = "oooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_6 = par_wrap;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "wrap" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description = "oooo";
        goto try_except_handler_2;
    }

    frame_d57f1155161e89950dbc66a71d10f4dc->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_assign_unpack_1__assign_source == NULL );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_4;

    tmp_assattr_name_1 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description = "oooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_stdout, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description = "oooo";
        goto try_except_handler_2;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_5 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_5 );
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout, tmp_assign_source_5 );
    Py_XDECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    branch_end_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stderr );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr, tmp_assign_source_6 );
    goto branch_end_3;
    branch_no_3:;
    // Tried code:
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrap_stream );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_stream );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrap_stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description = "oooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stderr );
    }

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "orig_stderr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description = "oooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_8 = par_convert;

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "convert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description = "oooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_9 = par_strip;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "strip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description = "oooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_10 = par_autoreset;

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "autoreset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description = "oooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_11 = par_wrap;

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "wrap" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description = "oooo";
        goto try_except_handler_3;
    }

    frame_d57f1155161e89950dbc66a71d10f4dc->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description = "oooo";
        goto try_except_handler_3;
    }
    assert( tmp_assign_unpack_2__assign_source == NULL );
    tmp_assign_unpack_2__assign_source = tmp_assign_source_7;

    tmp_assattr_name_2 = tmp_assign_unpack_2__assign_source;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description = "oooo";
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_stderr, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description = "oooo";
        goto try_except_handler_3;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_8 = tmp_assign_unpack_2__assign_source;

    CHECK_OBJECT( tmp_assign_source_8 );
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr, tmp_assign_source_8 );
    Py_XDECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    branch_end_3:;
    tmp_cond_value_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit_done );

    if (unlikely( tmp_cond_value_2 == NULL ))
    {
        tmp_cond_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atexit_done );
    }

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atexit_done" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atexit );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "atexit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_register );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_reset_all );

    if (unlikely( tmp_args_element_name_12 == NULL ))
    {
        tmp_args_element_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reset_all );
    }

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reset_all" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    frame_d57f1155161e89950dbc66a71d10f4dc->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_9 = Py_True;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit_done, tmp_assign_source_9 );
    branch_no_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d57f1155161e89950dbc66a71d10f4dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d57f1155161e89950dbc66a71d10f4dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d57f1155161e89950dbc66a71d10f4dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d57f1155161e89950dbc66a71d10f4dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d57f1155161e89950dbc66a71d10f4dc, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_d57f1155161e89950dbc66a71d10f4dc, type_description ,par_autoreset, par_convert, par_strip, par_wrap );

    // Release cached frame.
    if ( frame_d57f1155161e89950dbc66a71d10f4dc == cache_frame_d57f1155161e89950dbc66a71d10f4dc )
    {
        Py_DECREF( frame_d57f1155161e89950dbc66a71d10f4dc );
    }
    cache_frame_d57f1155161e89950dbc66a71d10f4dc = NULL;

    assertFrameObject( frame_d57f1155161e89950dbc66a71d10f4dc );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_2_init );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_autoreset );
    par_autoreset = NULL;

    Py_XDECREF( par_convert );
    par_convert = NULL;

    Py_XDECREF( par_strip );
    par_strip = NULL;

    Py_XDECREF( par_wrap );
    par_wrap = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_autoreset );
    par_autoreset = NULL;

    Py_XDECREF( par_convert );
    par_convert = NULL;

    Py_XDECREF( par_strip );
    par_strip = NULL;

    Py_XDECREF( par_wrap );
    par_wrap = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_2_init );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_colorama$initialise$$$function_3_deinit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_10f1309e13ea5a637017852d7069a327 = NULL;

    struct Nuitka_FrameObject *frame_10f1309e13ea5a637017852d7069a327;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_10f1309e13ea5a637017852d7069a327, codeobj_10f1309e13ea5a637017852d7069a327, module_colorama$initialise, 0 );
    frame_10f1309e13ea5a637017852d7069a327 = cache_frame_10f1309e13ea5a637017852d7069a327;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10f1309e13ea5a637017852d7069a327 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10f1309e13ea5a637017852d7069a327 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout );

    if (unlikely( tmp_compare_left_1 == NULL ))
    {
        tmp_compare_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stdout );
    }

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "orig_stdout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stdout );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "orig_stdout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_stdout, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_compare_left_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr );

    if (unlikely( tmp_compare_left_2 == NULL ))
    {
        tmp_compare_left_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stderr );
    }

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "orig_stderr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stderr );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "orig_stderr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;

        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_stderr, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto frame_exception_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10f1309e13ea5a637017852d7069a327 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10f1309e13ea5a637017852d7069a327 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10f1309e13ea5a637017852d7069a327, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10f1309e13ea5a637017852d7069a327->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10f1309e13ea5a637017852d7069a327, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_10f1309e13ea5a637017852d7069a327, ""  );

    // Release cached frame.
    if ( frame_10f1309e13ea5a637017852d7069a327 == cache_frame_10f1309e13ea5a637017852d7069a327 )
    {
        Py_DECREF( frame_10f1309e13ea5a637017852d7069a327 );
    }
    cache_frame_10f1309e13ea5a637017852d7069a327 = NULL;

    assertFrameObject( frame_10f1309e13ea5a637017852d7069a327 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_3_deinit );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_colorama$initialise$$$function_4_colorama_text( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_args = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_kwargs = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Nuitka_Generator_New(
        colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_context,
        module_colorama$initialise,
        const_str_plain_colorama_text,
#if PYTHON_VERSION >= 350
        const_str_plain_colorama_text,
#endif
        codeobj_c6e2b3dd763eeadf86f55011ea7738f1,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_args;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_kwargs;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    assert( Py_SIZE( tmp_return_value) >= 2 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_4_colorama_text );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_4_colorama_text );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_context( struct Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_expression_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    char const *type_description;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_c6e2b3dd763eeadf86f55011ea7738f1, module_colorama$initialise, sizeof(struct Nuitka_CellObject *)+sizeof(struct Nuitka_CellObject *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->m_frame.f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_init );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_init );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "init" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description = "cc";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[0] == NULL )
    {
        tmp_dircall_arg2_1 = NULL;
    }
    else
    {
        tmp_dircall_arg2_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description = "cc";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[1] == NULL )
    {
        tmp_dircall_arg3_1 = NULL;
    }
    else
    {
        tmp_dircall_arg3_1 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_dircall_arg3_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description = "cc";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "cc";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_expression_name_1 = Py_None;
    Py_INCREF( tmp_expression_name_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description = "cc";
        goto try_except_handler_1;
    }
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, generator->m_frame, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_deinit );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deinit );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "deinit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description = "cc";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 64;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description = "cc";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "cc";
    goto try_except_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text );
    return;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_deinit );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deinit );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "deinit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description = "cc";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 64;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description = "cc";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)generator->m_frame, type_description ,generator->m_closure[0], generator->m_closure[1] );

        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    generator->m_yielded = NULL;
    return;

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    generator->m_yielded = NULL;
    return;
}


static PyObject *impl_colorama$initialise$$$function_5_reinit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_12bd6f2b6650cc4f67392dcc3852da4b = NULL;

    struct Nuitka_FrameObject *frame_12bd6f2b6650cc4f67392dcc3852da4b;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_12bd6f2b6650cc4f67392dcc3852da4b, codeobj_12bd6f2b6650cc4f67392dcc3852da4b, module_colorama$initialise, 0 );
    frame_12bd6f2b6650cc4f67392dcc3852da4b = cache_frame_12bd6f2b6650cc4f67392dcc3852da4b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_12bd6f2b6650cc4f67392dcc3852da4b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_12bd6f2b6650cc4f67392dcc3852da4b ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout );

    if (unlikely( tmp_compare_left_1 == NULL ))
    {
        tmp_compare_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapped_stdout );
    }

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrapped_stdout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;

        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapped_stdout );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrapped_stdout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;

        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_stdout, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_compare_left_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr );

    if (unlikely( tmp_compare_left_2 == NULL ))
    {
        tmp_compare_left_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapped_stderr );
    }

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrapped_stderr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;

        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapped_stderr );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrapped_stderr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;

        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_stderr, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;

        goto frame_exception_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12bd6f2b6650cc4f67392dcc3852da4b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12bd6f2b6650cc4f67392dcc3852da4b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_12bd6f2b6650cc4f67392dcc3852da4b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_12bd6f2b6650cc4f67392dcc3852da4b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_12bd6f2b6650cc4f67392dcc3852da4b, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_12bd6f2b6650cc4f67392dcc3852da4b, ""  );

    // Release cached frame.
    if ( frame_12bd6f2b6650cc4f67392dcc3852da4b == cache_frame_12bd6f2b6650cc4f67392dcc3852da4b )
    {
        Py_DECREF( frame_12bd6f2b6650cc4f67392dcc3852da4b );
    }
    cache_frame_12bd6f2b6650cc4f67392dcc3852da4b = NULL;

    assertFrameObject( frame_12bd6f2b6650cc4f67392dcc3852da4b );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_5_reinit );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_colorama$initialise$$$function_6_wrap_stream( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[ 0 ];
    PyObject *par_convert = python_pars[ 1 ];
    PyObject *par_strip = python_pars[ 2 ];
    PyObject *par_autoreset = python_pars[ 3 ];
    PyObject *par_wrap = python_pars[ 4 ];
    PyObject *var_wrapper = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_28959c29474a1367c29ea1e89c2914e5 = NULL;

    struct Nuitka_FrameObject *frame_28959c29474a1367c29ea1e89c2914e5;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_28959c29474a1367c29ea1e89c2914e5, codeobj_28959c29474a1367c29ea1e89c2914e5, module_colorama$initialise, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_28959c29474a1367c29ea1e89c2914e5 = cache_frame_28959c29474a1367c29ea1e89c2914e5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_28959c29474a1367c29ea1e89c2914e5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_28959c29474a1367c29ea1e89c2914e5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_wrap;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_AnsiToWin32 );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AnsiToWin32 );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AnsiToWin32" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_stream;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_key_1 = const_str_plain_convert;
    tmp_dict_value_1 = par_convert;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_strip;
    tmp_dict_value_2 = par_strip;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_autoreset;
    tmp_dict_value_3 = par_autoreset;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_28959c29474a1367c29ea1e89c2914e5->m_frame.f_lineno = 76;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_wrapper == NULL );
    var_wrapper = tmp_assign_source_1;

    tmp_called_instance_1 = var_wrapper;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_28959c29474a1367c29ea1e89c2914e5->m_frame.f_lineno = 78;
    tmp_cond_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_should_wrap );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 78;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_1 = var_wrapper;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "wrapper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stream );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stream;
        par_stream = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_2:;
    branch_no_1:;
    tmp_return_value = par_stream;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28959c29474a1367c29ea1e89c2914e5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_28959c29474a1367c29ea1e89c2914e5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28959c29474a1367c29ea1e89c2914e5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_28959c29474a1367c29ea1e89c2914e5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_28959c29474a1367c29ea1e89c2914e5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_28959c29474a1367c29ea1e89c2914e5, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_28959c29474a1367c29ea1e89c2914e5, type_description ,par_stream, par_convert, par_strip, par_autoreset, par_wrap, var_wrapper );

    // Release cached frame.
    if ( frame_28959c29474a1367c29ea1e89c2914e5 == cache_frame_28959c29474a1367c29ea1e89c2914e5 )
    {
        Py_DECREF( frame_28959c29474a1367c29ea1e89c2914e5 );
    }
    cache_frame_28959c29474a1367c29ea1e89c2914e5 = NULL;

    assertFrameObject( frame_28959c29474a1367c29ea1e89c2914e5 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_6_wrap_stream );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_convert );
    par_convert = NULL;

    Py_XDECREF( par_strip );
    par_strip = NULL;

    Py_XDECREF( par_autoreset );
    par_autoreset = NULL;

    Py_XDECREF( par_wrap );
    par_wrap = NULL;

    Py_XDECREF( var_wrapper );
    var_wrapper = NULL;

    goto function_return_exit;
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

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_convert );
    par_convert = NULL;

    Py_XDECREF( par_strip );
    par_strip = NULL;

    Py_XDECREF( par_autoreset );
    par_autoreset = NULL;

    Py_XDECREF( par_wrap );
    par_wrap = NULL;

    Py_XDECREF( var_wrapper );
    var_wrapper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( colorama$initialise$$$function_6_wrap_stream );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_1_reset_all(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_1_reset_all,
        const_str_plain_reset_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_158df9ca5540c44e39096016d23eecdb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_colorama$initialise,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_2_init( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_2_init,
        const_str_plain_init,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d57f1155161e89950dbc66a71d10f4dc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_colorama$initialise,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_3_deinit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_3_deinit,
        const_str_plain_deinit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_10f1309e13ea5a637017852d7069a327,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_colorama$initialise,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_4_colorama_text(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_4_colorama_text,
        const_str_plain_colorama_text,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c6e2b3dd763eeadf86f55011ea7738f1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_colorama$initialise,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_5_reinit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_5_reinit,
        const_str_plain_reinit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_12bd6f2b6650cc4f67392dcc3852da4b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_colorama$initialise,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_6_wrap_stream(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_6_wrap_stream,
        const_str_plain_wrap_stream,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_28959c29474a1367c29ea1e89c2914e5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_colorama$initialise,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_colorama$initialise =
{
    PyModuleDef_HEAD_INIT,
    "colorama.initialise",   /* m_name */
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

MOD_INIT_DECL( colorama$initialise )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_colorama$initialise );
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
    puts("colorama.initialise: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("colorama.initialise: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcolorama$initialise" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_colorama$initialise = Py_InitModule4(
        "colorama.initialise",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_colorama$initialise = PyModule_Create( &mdef_colorama$initialise );
#endif

    moduledict_colorama$initialise = (PyDictObject *)((PyModuleObject *)module_colorama$initialise)->md_dict;

    CHECK_OBJECT( module_colorama$initialise );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_3c23d5986caeba567f5a103584db00f8, module_colorama$initialise );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_colorama$initialise );

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
    PyObject *tmp_args_element_name_1;
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
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    struct Nuitka_FrameObject *frame_22bb0c303399da14c8282487c093115c;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c5005d46a461d24f0a3f76fbb5a3b5f0;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_colorama;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_plain_atexit;
    tmp_globals_name_1 = ((PyModuleObject *)module_colorama$initialise)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_5 != NULL );
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit, tmp_assign_source_5 );
    // Frame without reuse.
    frame_22bb0c303399da14c8282487c093115c = MAKE_MODULE_FRAME( codeobj_22bb0c303399da14c8282487c093115c, module_colorama$initialise );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_22bb0c303399da14c8282487c093115c );
    assert( Py_REFCNT( frame_22bb0c303399da14c8282487c093115c ) == 2 );

    // Framed code:
    tmp_name_name_2 = const_str_plain_contextlib;
    tmp_globals_name_2 = ((PyModuleObject *)module_colorama$initialise)->md_dict;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_22bb0c303399da14c8282487c093115c->m_frame.f_lineno = 3;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_contextlib, tmp_assign_source_6 );
    tmp_name_name_3 = const_str_plain_sys;
    tmp_globals_name_3 = ((PyModuleObject *)module_colorama$initialise)->md_dict;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_22bb0c303399da14c8282487c093115c->m_frame.f_lineno = 4;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    assert( tmp_assign_source_7 != NULL );
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_name_name_4 = const_str_plain_ansitowin32;
    tmp_globals_name_4 = ((PyModuleObject *)module_colorama$initialise)->md_dict;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_AnsiToWin32_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_22bb0c303399da14c8282487c093115c->m_frame.f_lineno = 6;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_AnsiToWin32 );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_AnsiToWin32, tmp_assign_source_8 );
    tmp_assign_source_9 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout, tmp_assign_source_9 );
    tmp_assign_source_10 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr, tmp_assign_source_10 );
    tmp_assign_source_11 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout, tmp_assign_source_11 );
    tmp_assign_source_12 = Py_None;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr, tmp_assign_source_12 );
    tmp_assign_source_13 = Py_False;
    UPDATE_STRING_DICT0( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit_done, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_colorama$initialise$$$function_1_reset_all(  );
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_reset_all, tmp_assign_source_14 );
    tmp_defaults_1 = const_tuple_false_none_none_true_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_15 = MAKE_FUNCTION_colorama$initialise$$$function_2_init( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_init, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_colorama$initialise$$$function_3_deinit(  );
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_deinit, tmp_assign_source_16 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_contextlib );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_contextlib );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "contextlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = MAKE_FUNCTION_colorama$initialise$$$function_4_colorama_text(  );
    frame_22bb0c303399da14c8282487c093115c->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_contextmanager, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_colorama_text, tmp_assign_source_17 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_22bb0c303399da14c8282487c093115c );
#endif
    popFrameStack();

    assertFrameObject( frame_22bb0c303399da14c8282487c093115c );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_22bb0c303399da14c8282487c093115c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_22bb0c303399da14c8282487c093115c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_22bb0c303399da14c8282487c093115c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_22bb0c303399da14c8282487c093115c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_18 = MAKE_FUNCTION_colorama$initialise$$$function_5_reinit(  );
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_reinit, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_colorama$initialise$$$function_6_wrap_stream(  );
    UPDATE_STRING_DICT1( moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrap_stream, tmp_assign_source_19 );

    return MOD_RETURN_VALUE( module_colorama$initialise );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
