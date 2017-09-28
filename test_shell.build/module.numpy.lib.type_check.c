/* Generated code for Python source for module 'numpy.lib.type_check'
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

/* The _module_numpy$lib$type_check is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$type_check;
PyDictObject *moduledict_numpy$lib$type_check;

/* The module constants used, if any. */
static PyObject *const_list_7408997311a16cd973ccb73960eae3bc_list;
extern PyObject *const_str_plain_float_;
static PyObject *const_str_digest_1272859cc603905ab5e85e9bc4a21d6d;
static PyObject *const_str_digest_2c2f03b41c77c8842fe2c6d0834f1b1f;
static PyObject *const_str_plain_asscalar;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_array;
static PyObject *const_tuple_str_plain_val_tuple;
extern PyObject *const_str_plain_precision;
extern PyObject *const_str_plain_intersection;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_D;
static PyObject *const_str_digest_31911ab77898fbef66ec0576fd705fbf;
extern PyObject *const_tuple_str_plain_getlimits_tuple;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_angle_listcontraction;
extern PyObject *const_str_plain_double;
static PyObject *const_tuple_str_plain_char_tuple;
extern PyObject *const_str_plain_a;
static PyObject *const_str_digest_7d06b9dfb28c50150a23aaf7e4464a27;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_where;
extern PyObject *const_str_plain_single;
static PyObject *const_str_digest_793dd2dc20fd2ea802f720223d7272d8;
static PyObject *const_str_plain_xtype;
extern PyObject *const_str_plain_obj2sctype;
extern PyObject *const_str_plain_getlimits;
static PyObject *const_str_digest_59f0a4a7166fde20d15b9c978d112d4e;
extern PyObject *const_str_plain_common_type;
extern PyObject *const_str_plain_longdouble;
extern PyObject *const_str_plain_real;
static PyObject *const_str_plain_type_;
static PyObject *const_str_plain_nan_to_num;
static PyObject *const_tuple_str_plain_GDFgdf_str_plain_d_tuple;
extern PyObject *const_tuple_true_tuple;
static PyObject *const_tuple_496287f99b1984e9c1a569a9bb4a9ac6_tuple;
extern PyObject *const_str_plain_eps;
extern PyObject *const_str_plain_typecodes;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_csingle;
extern PyObject *const_str_plain_res;
static PyObject *const_str_digest_2815393151605fd5612a3110b0a07ce2;
static PyObject *const_tuple_8cb4095fc58f2819928b34ae438796de_tuple;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_4597cf420c1bfdcbc1c8ec3199b90183;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_str_plain_isnan;
static PyObject *const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple;
static PyObject *const_str_digest_7ba543784f99e89f93fecfed2aa5dab4;
extern PyObject *const_str_plain_typename;
extern PyObject *const_str_plain_all;
static PyObject *const_tuple_d3b0e69079b94bceb36cc3b55eb20b2d_tuple;
extern PyObject *const_str_plain_imag;
extern PyObject *const_str_plain_type_check;
extern PyObject *const_str_plain_l;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_isposinf;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_isneginf;
extern PyObject *const_str_plain__nx;
static PyObject *const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_str_digest_6a797a370830505dc73095dcc7cdf3f1;
static PyObject *const_str_plain_typeset;
extern PyObject *const_tuple_int_pos_100_tuple;
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain_iscomplex;
extern PyObject *const_str_plain_half;
extern PyObject *const_str_plain_absolute;
static PyObject *const_str_digest_d222958b180ec6664eb4b921e35d8304;
static PyObject *const_str_plain_array_precision;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_f;
static PyObject *const_str_plain__getmaxmin;
extern PyObject *const_str_plain_array_type;
extern PyObject *const_str_plain_arrays;
static PyObject *const_str_digest_53c8e87729c62cbf7214eb324f01fa8f;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_isneginf_str_plain_isposinf_tuple;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_finfo;
extern PyObject *const_str_plain_F;
static PyObject *const_str_plain_maxf;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain_dest;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_eac0cb7090e335bbb2e16d4595fd4268;
extern PyObject *const_str_digest_f06b0863ac057f993e0b6697d72eaf86;
extern PyObject *const_tuple_str_plain_a_str_plain_dtype_tuple;
static PyObject *const_str_plain_isrealobj;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_38e665b4d356a613351958197621fbab;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_subok;
static PyObject *const_str_plain_minf;
static PyObject *const_tuple_str_plain_x_str_plain_dtype_str_plain_type__tuple;
static PyObject *const_str_digest_3b4c0c12f6833fe1bbb4274681095c66;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_plain__namefromtype;
extern PyObject *const_str_plain_complexfloating;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_mintypecode;
extern PyObject *const_str_plain_ufunclike;
extern PyObject *const_str_plain_isreal;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_iscomplexobj;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_inexact;
extern PyObject *const_str_plain_is_complex;
extern PyObject *const_str_plain_clongdouble;
extern PyObject *const_tuple_str_plain_a_tuple;
static PyObject *const_str_plain_GDFgdf;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_get;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_sort;
static PyObject *const_str_digest_ec4d4c426c3014b1bef4c67234b09210;
static PyObject *const_tuple_1e27710593c2824ace25472480ca8477_tuple;
static PyObject *const_tuple_e1a53aef4efc2da3bf5faa97beda41dd_tuple;
static PyObject *const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple;
static PyObject *const_str_plain__typecodes_by_elsize;
static PyObject *const_str_digest_319fcf66f386c3009026359f595c3662;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_t_tuple;
extern PyObject *const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8;
static PyObject *const_str_plain_real_if_close;
extern PyObject *const_str_plain_cdouble;
extern PyObject *const_str_plain_copyto;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_isscalar;
extern PyObject *const_str_plain_ax;
extern PyObject *const_int_pos_100;
static PyObject *const_str_plain_typechars;
extern PyObject *const_str_plain_asfarray;
static PyObject *const_dict_6641313163263c73f169be4f088d77be;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_7408997311a16cd973ccb73960eae3bc_list = PyList_New( 13 );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 0, const_str_plain_iscomplexobj ); Py_INCREF( const_str_plain_iscomplexobj );
    const_str_plain_isrealobj = UNSTREAM_STRING( &constant_bin[ 821337 ], 9, 1 );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 1, const_str_plain_isrealobj ); Py_INCREF( const_str_plain_isrealobj );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 2, const_str_plain_imag ); Py_INCREF( const_str_plain_imag );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 3, const_str_plain_iscomplex ); Py_INCREF( const_str_plain_iscomplex );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 4, const_str_plain_isreal ); Py_INCREF( const_str_plain_isreal );
    const_str_plain_nan_to_num = UNSTREAM_STRING( &constant_bin[ 821947 ], 10, 1 );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 5, const_str_plain_nan_to_num ); Py_INCREF( const_str_plain_nan_to_num );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 6, const_str_plain_real ); Py_INCREF( const_str_plain_real );
    const_str_plain_real_if_close = UNSTREAM_STRING( &constant_bin[ 821560 ], 13, 1 );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 7, const_str_plain_real_if_close ); Py_INCREF( const_str_plain_real_if_close );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 8, const_str_plain_typename ); Py_INCREF( const_str_plain_typename );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 9, const_str_plain_asfarray ); Py_INCREF( const_str_plain_asfarray );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 10, const_str_plain_mintypecode ); Py_INCREF( const_str_plain_mintypecode );
    const_str_plain_asscalar = UNSTREAM_STRING( &constant_bin[ 987415 ], 8, 1 );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 11, const_str_plain_asscalar ); Py_INCREF( const_str_plain_asscalar );
    PyList_SET_ITEM( const_list_7408997311a16cd973ccb73960eae3bc_list, 12, const_str_plain_common_type ); Py_INCREF( const_str_plain_common_type );
    const_str_digest_1272859cc603905ab5e85e9bc4a21d6d = UNSTREAM_STRING( &constant_bin[ 987423 ], 671, 0 );
    const_str_digest_2c2f03b41c77c8842fe2c6d0834f1b1f = UNSTREAM_STRING( &constant_bin[ 988094 ], 1257, 0 );
    const_tuple_str_plain_val_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_val_tuple, 0, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_str_digest_31911ab77898fbef66ec0576fd705fbf = UNSTREAM_STRING( &constant_bin[ 989351 ], 1795, 0 );
    const_tuple_str_plain_char_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_char_tuple, 0, const_str_plain_char ); Py_INCREF( const_str_plain_char );
    const_str_digest_7d06b9dfb28c50150a23aaf7e4464a27 = UNSTREAM_STRING( &constant_bin[ 991146 ], 613, 0 );
    const_str_digest_793dd2dc20fd2ea802f720223d7272d8 = UNSTREAM_STRING( &constant_bin[ 991759 ], 663, 0 );
    const_str_plain_xtype = UNSTREAM_STRING( &constant_bin[ 992422 ], 5, 1 );
    const_str_digest_59f0a4a7166fde20d15b9c978d112d4e = UNSTREAM_STRING( &constant_bin[ 992427 ], 944, 0 );
    const_str_plain_type_ = UNSTREAM_STRING( &constant_bin[ 227401 ], 5, 1 );
    const_tuple_str_plain_GDFgdf_str_plain_d_tuple = PyTuple_New( 2 );
    const_str_plain_GDFgdf = UNSTREAM_STRING( &constant_bin[ 988797 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_GDFgdf_str_plain_d_tuple, 0, const_str_plain_GDFgdf ); Py_INCREF( const_str_plain_GDFgdf );
    PyTuple_SET_ITEM( const_tuple_str_plain_GDFgdf_str_plain_d_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_tuple_496287f99b1984e9c1a569a9bb4a9ac6_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_496287f99b1984e9c1a569a9bb4a9ac6_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_496287f99b1984e9c1a569a9bb4a9ac6_tuple, 1, const_str_plain_asanyarray ); Py_INCREF( const_str_plain_asanyarray );
    PyTuple_SET_ITEM( const_tuple_496287f99b1984e9c1a569a9bb4a9ac6_tuple, 2, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_496287f99b1984e9c1a569a9bb4a9ac6_tuple, 3, const_str_plain_isnan ); Py_INCREF( const_str_plain_isnan );
    PyTuple_SET_ITEM( const_tuple_496287f99b1984e9c1a569a9bb4a9ac6_tuple, 4, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    const_str_digest_2815393151605fd5612a3110b0a07ce2 = UNSTREAM_STRING( &constant_bin[ 993371 ], 56, 0 );
    const_tuple_8cb4095fc58f2819928b34ae438796de_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_8cb4095fc58f2819928b34ae438796de_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_8cb4095fc58f2819928b34ae438796de_tuple, 1, const_str_plain_copy ); Py_INCREF( const_str_plain_copy );
    PyTuple_SET_ITEM( const_tuple_8cb4095fc58f2819928b34ae438796de_tuple, 2, const_str_plain_xtype ); Py_INCREF( const_str_plain_xtype );
    PyTuple_SET_ITEM( const_tuple_8cb4095fc58f2819928b34ae438796de_tuple, 3, const_str_plain_iscomplex ); Py_INCREF( const_str_plain_iscomplex );
    PyTuple_SET_ITEM( const_tuple_8cb4095fc58f2819928b34ae438796de_tuple, 4, const_str_plain_isscalar ); Py_INCREF( const_str_plain_isscalar );
    PyTuple_SET_ITEM( const_tuple_8cb4095fc58f2819928b34ae438796de_tuple, 5, const_str_plain_dest ); Py_INCREF( const_str_plain_dest );
    const_str_plain_maxf = UNSTREAM_STRING( &constant_bin[ 993427 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_8cb4095fc58f2819928b34ae438796de_tuple, 6, const_str_plain_maxf ); Py_INCREF( const_str_plain_maxf );
    const_str_plain_minf = UNSTREAM_STRING( &constant_bin[ 993431 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_8cb4095fc58f2819928b34ae438796de_tuple, 7, const_str_plain_minf ); Py_INCREF( const_str_plain_minf );
    PyTuple_SET_ITEM( const_tuple_8cb4095fc58f2819928b34ae438796de_tuple, 8, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_str_digest_4597cf420c1bfdcbc1c8ec3199b90183 = UNSTREAM_STRING( &constant_bin[ 993435 ], 648, 0 );
    const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple, 1, const_str_plain_ax ); Py_INCREF( const_str_plain_ax );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple, 2, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_digest_7ba543784f99e89f93fecfed2aa5dab4 = UNSTREAM_STRING( &constant_bin[ 994083 ], 43, 0 );
    const_tuple_d3b0e69079b94bceb36cc3b55eb20b2d_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_d3b0e69079b94bceb36cc3b55eb20b2d_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_d3b0e69079b94bceb36cc3b55eb20b2d_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_plain_typeset = UNSTREAM_STRING( &constant_bin[ 988656 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_d3b0e69079b94bceb36cc3b55eb20b2d_tuple, 2, const_str_plain_typeset ); Py_INCREF( const_str_plain_typeset );
    const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 1, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 2, const_str_plain_getlimits ); Py_INCREF( const_str_plain_getlimits );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 3, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_digest_6a797a370830505dc73095dcc7cdf3f1 = UNSTREAM_STRING( &constant_bin[ 994126 ], 17, 0 );
    const_str_digest_d222958b180ec6664eb4b921e35d8304 = UNSTREAM_STRING( &constant_bin[ 994143 ], 589, 0 );
    const_str_plain_array_precision = UNSTREAM_STRING( &constant_bin[ 994732 ], 15, 1 );
    const_str_plain__getmaxmin = UNSTREAM_STRING( &constant_bin[ 994747 ], 10, 1 );
    const_str_digest_53c8e87729c62cbf7214eb324f01fa8f = UNSTREAM_STRING( &constant_bin[ 994757 ], 724, 0 );
    const_tuple_str_plain_isneginf_str_plain_isposinf_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_isneginf_str_plain_isposinf_tuple, 0, const_str_plain_isneginf ); Py_INCREF( const_str_plain_isneginf );
    PyTuple_SET_ITEM( const_tuple_str_plain_isneginf_str_plain_isposinf_tuple, 1, const_str_plain_isposinf ); Py_INCREF( const_str_plain_isposinf );
    const_str_digest_eac0cb7090e335bbb2e16d4595fd4268 = UNSTREAM_STRING( &constant_bin[ 995481 ], 1099, 0 );
    const_str_digest_38e665b4d356a613351958197621fbab = UNSTREAM_STRING( &constant_bin[ 996580 ], 376, 0 );
    const_tuple_str_plain_x_str_plain_dtype_str_plain_type__tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_dtype_str_plain_type__tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_dtype_str_plain_type__tuple, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_dtype_str_plain_type__tuple, 2, const_str_plain_type_ ); Py_INCREF( const_str_plain_type_ );
    const_str_digest_3b4c0c12f6833fe1bbb4274681095c66 = UNSTREAM_STRING( &constant_bin[ 996956 ], 1092, 0 );
    const_str_plain__namefromtype = UNSTREAM_STRING( &constant_bin[ 998048 ], 13, 1 );
    const_str_digest_ec4d4c426c3014b1bef4c67234b09210 = UNSTREAM_STRING( &constant_bin[ 998061 ], 574, 0 );
    const_tuple_1e27710593c2824ace25472480ca8477_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 0, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 1, const_str_plain_is_complex ); Py_INCREF( const_str_plain_is_complex );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 2, const_str_plain_precision ); Py_INCREF( const_str_plain_precision );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 3, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 4, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_1e27710593c2824ace25472480ca8477_tuple, 5, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_tuple_e1a53aef4efc2da3bf5faa97beda41dd_tuple = PyTuple_New( 8 );
    const_str_plain_typechars = UNSTREAM_STRING( &constant_bin[ 230081 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_e1a53aef4efc2da3bf5faa97beda41dd_tuple, 0, const_str_plain_typechars ); Py_INCREF( const_str_plain_typechars );
    PyTuple_SET_ITEM( const_tuple_e1a53aef4efc2da3bf5faa97beda41dd_tuple, 1, const_str_plain_typeset ); Py_INCREF( const_str_plain_typeset );
    PyTuple_SET_ITEM( const_tuple_e1a53aef4efc2da3bf5faa97beda41dd_tuple, 2, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    PyTuple_SET_ITEM( const_tuple_e1a53aef4efc2da3bf5faa97beda41dd_tuple, 3, const_str_plain_typecodes ); Py_INCREF( const_str_plain_typecodes );
    PyTuple_SET_ITEM( const_tuple_e1a53aef4efc2da3bf5faa97beda41dd_tuple, 4, const_str_plain_intersection ); Py_INCREF( const_str_plain_intersection );
    PyTuple_SET_ITEM( const_tuple_e1a53aef4efc2da3bf5faa97beda41dd_tuple, 5, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    PyTuple_SET_ITEM( const_tuple_e1a53aef4efc2da3bf5faa97beda41dd_tuple, 6, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_e1a53aef4efc2da3bf5faa97beda41dd_tuple, 7, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple, 1, const_str_plain_getlimits ); Py_INCREF( const_str_plain_getlimits );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple, 2, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_plain__typecodes_by_elsize = UNSTREAM_STRING( &constant_bin[ 998635 ], 20, 1 );
    const_str_digest_319fcf66f386c3009026359f595c3662 = UNSTREAM_STRING( &constant_bin[ 998655 ], 64, 0 );
    const_dict_6641313163263c73f169be4f088d77be = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 998719 ], 414 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$type_check( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2485b340f281129c398d75630e66ccf6;
static PyCodeObject *codeobj_a0423c0b36e44065234b90545d76f68e;
static PyCodeObject *codeobj_5265611164c36681619f84c6e4047cac;
static PyCodeObject *codeobj_bd311de121cbf6b17244e405fbf346b0;
static PyCodeObject *codeobj_6dc14b438e27aff97d48fbde0ab908a6;
static PyCodeObject *codeobj_f99900f15e65b92adb654915f64fb847;
static PyCodeObject *codeobj_d9645e0047f7255704acf33ac9cdc93b;
static PyCodeObject *codeobj_0e6eddaa808de2fd15e7f4cd4f2a6994;
static PyCodeObject *codeobj_f37ff8c0011137c77b526aa4746c12ff;
static PyCodeObject *codeobj_0536d3d5873a8ff77acecaafe5d0d047;
static PyCodeObject *codeobj_9d8341cb390cec1a5f4dee0817819a11;
static PyCodeObject *codeobj_94cb2d398af63382767a455106cb10b4;
static PyCodeObject *codeobj_81b670accef114e7d4d53aac69297147;
static PyCodeObject *codeobj_4c819b75376fdbc14ad0acba1f1f8d54;
static PyCodeObject *codeobj_c0b24689e09f6391811129565c5f81eb;
static PyCodeObject *codeobj_dda4a516b97f2c27c964c8073c3b7f6c;
static PyCodeObject *codeobj_5f6730341bc22c15403ad34ffbf0c3cc;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_2815393151605fd5612a3110b0a07ce2;
    codeobj_2485b340f281129c398d75630e66ccf6 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 60, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_t_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a0423c0b36e44065234b90545d76f68e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 62, const_tuple_d3b0e69079b94bceb36cc3b55eb20b2d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_5265611164c36681619f84c6e4047cac = MAKE_CODEOBJ( module_filename_obj, const_str_plain__getmaxmin, 327, const_tuple_str_plain_t_str_plain_getlimits_str_plain_f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bd311de121cbf6b17244e405fbf346b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asfarray, 74, const_tuple_str_plain_a_str_plain_dtype_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6dc14b438e27aff97d48fbde0ab908a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asscalar, 459, const_tuple_str_plain_a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f99900f15e65b92adb654915f64fb847 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_common_type, 571, const_tuple_1e27710593c2824ace25472480ca8477_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_d9645e0047f7255704acf33ac9cdc93b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_imag, 148, const_tuple_str_plain_val_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0e6eddaa808de2fd15e7f4cd4f2a6994 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iscomplex, 186, const_tuple_str_plain_x_str_plain_ax_str_plain_res_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f37ff8c0011137c77b526aa4746c12ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iscomplexobj, 251, const_tuple_str_plain_x_str_plain_dtype_str_plain_type__tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0536d3d5873a8ff77acecaafe5d0d047 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isreal, 221, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9d8341cb390cec1a5f4dee0817819a11 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isrealobj, 291, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_94cb2d398af63382767a455106cb10b4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mintypecode, 17, const_tuple_e1a53aef4efc2da3bf5faa97beda41dd_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_81b670accef114e7d4d53aac69297147 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nan_to_num, 332, const_tuple_8cb4095fc58f2819928b34ae438796de_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4c819b75376fdbc14ad0acba1f1f8d54 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_real, 107, const_tuple_str_plain_val_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c0b24689e09f6391811129565c5f81eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_real_if_close, 404, const_tuple_str_plain_a_str_plain_tol_str_plain_getlimits_str_plain_f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dda4a516b97f2c27c964c8073c3b7f6c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_type_check, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_5f6730341bc22c15403ad34ffbf0c3cc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_typename, 508, const_tuple_str_plain_char_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$type_check$$$function_1_mintypecode$$$function_1_listcontraction( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$type_check$$$function_1_mintypecode$$$function_2_listcontraction( PyObject **python_pars, PyObject **closure_typeset );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_10_nan_to_num( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_11_real_if_close( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_12_asscalar(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_13_typename(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_14_common_type(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_1_mintypecode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_2_asfarray( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_3_real(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_4_imag(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_5_iscomplex(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_6_isreal(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_7_iscomplexobj(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_8_isrealobj(  );


static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_9__getmaxmin(  );


// The module function definitions.
static PyObject *impl_numpy$lib$type_check$$$function_1_mintypecode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_typechars = python_pars[ 0 ];
    PyObject *par_typeset = python_pars[ 1 ];
    PyObject *par_default = python_pars[ 2 ];
    PyObject *var_typecodes = NULL;
    PyObject *var_intersection = NULL;
    PyObject *var_l = NULL;
    PyObject *var_t = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_94cb2d398af63382767a455106cb10b4 = NULL;

    struct Nuitka_FrameObject *frame_94cb2d398af63382767a455106cb10b4;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94cb2d398af63382767a455106cb10b4, codeobj_94cb2d398af63382767a455106cb10b4, module_numpy$lib$type_check, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_94cb2d398af63382767a455106cb10b4 = cache_frame_94cb2d398af63382767a455106cb10b4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94cb2d398af63382767a455106cb10b4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94cb2d398af63382767a455106cb10b4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = par_typechars;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_dircall_arg1_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_1 = impl_numpy$lib$type_check$$$function_1_mintypecode$$$function_1_listcontraction( dir_call_args );
    }
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_typecodes == NULL );
    var_typecodes = tmp_assign_source_1;

    tmp_iter_arg_2 = var_typecodes;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_dircall_arg1_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_assign_source_2 = impl_numpy$lib$type_check$$$function_1_mintypecode$$$function_2_listcontraction( dir_call_args, &par_typeset );
    }
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_intersection == NULL );
    var_intersection = tmp_assign_source_2;

    tmp_cond_value_1 = var_intersection;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = par_default;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compexpr_left_1 = const_str_plain_F;
    tmp_compexpr_right_1 = var_intersection;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "intersection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_compexpr_left_2 = const_str_plain_d;
    tmp_compexpr_right_2 = var_intersection;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "intersection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    assert( !(tmp_cond_truth_2 == -1) );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = const_str_plain_D;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_assign_source_3 = PyList_New( 0 );
    assert( var_l == NULL );
    var_l = tmp_assign_source_3;

    tmp_iter_arg_3 = var_intersection;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "intersection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            exception_lineno = 68;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_6;
        Py_INCREF( var_t );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__typecodes_by_elsize );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typecodes_by_elsize );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_typecodes_by_elsize" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_index );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = var_t;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description = "oooooooo";
        goto try_except_handler_2;
    }

    frame_94cb2d398af63382767a455106cb10b4->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "oooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_l;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "l" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_i;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description = "oooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_t;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description = "oooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
    frame_94cb2d398af63382767a455106cb10b4->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description = "oooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_called_instance_1 = var_l;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "l" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_94cb2d398af63382767a455106cb10b4->m_frame.f_lineno = 71;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_sort );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_subscribed_name_2 = var_l;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "l" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_0;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94cb2d398af63382767a455106cb10b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_94cb2d398af63382767a455106cb10b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94cb2d398af63382767a455106cb10b4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94cb2d398af63382767a455106cb10b4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94cb2d398af63382767a455106cb10b4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94cb2d398af63382767a455106cb10b4, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_94cb2d398af63382767a455106cb10b4, type_description ,par_typechars, par_typeset, par_default, var_typecodes, var_intersection, var_l, var_t, var_i );

    // Release cached frame.
    if ( frame_94cb2d398af63382767a455106cb10b4 == cache_frame_94cb2d398af63382767a455106cb10b4 )
    {
        Py_DECREF( frame_94cb2d398af63382767a455106cb10b4 );
    }
    cache_frame_94cb2d398af63382767a455106cb10b4 = NULL;

    assertFrameObject( frame_94cb2d398af63382767a455106cb10b4 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_typechars );
    par_typechars = NULL;

    Py_XDECREF( par_typeset );
    par_typeset = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_typecodes );
    var_typecodes = NULL;

    Py_XDECREF( var_intersection );
    var_intersection = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_typechars );
    par_typechars = NULL;

    Py_XDECREF( par_typeset );
    par_typeset = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_typecodes );
    var_typecodes = NULL;

    Py_XDECREF( var_intersection );
    var_intersection = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode );
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


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$type_check$$$function_1_mintypecode$$$function_1_listcontraction( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_$0 = python_pars[ 0 ];
    PyObject *var_t = NULL;
    PyObject *tmp_contraction_result = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_2485b340f281129c398d75630e66ccf6 = NULL;

    struct Nuitka_FrameObject *frame_2485b340f281129c398d75630e66ccf6;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( tmp_contraction_result == NULL );
    tmp_contraction_result = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2485b340f281129c398d75630e66ccf6, codeobj_2485b340f281129c398d75630e66ccf6, module_numpy$lib$type_check, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_2485b340f281129c398d75630e66ccf6 = cache_frame_2485b340f281129c398d75630e66ccf6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2485b340f281129c398d75630e66ccf6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2485b340f281129c398d75630e66ccf6 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = par_$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oo";
            exception_lineno = 60;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_3;
        Py_INCREF( var_t );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_isinstance_inst_1 = var_t;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
    tmp_and_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oo";
        goto try_except_handler_2;
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
    tmp_and_right_value_1 = var_t;

    CHECK_OBJECT( tmp_and_right_value_1 );
    tmp_or_left_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_or_left_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oo";
        goto try_except_handler_2;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description = "oo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_t;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_2485b340f281129c398d75630e66ccf6->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_char );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oo";
        goto try_except_handler_2;
    }
    tmp_append_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_append_value_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_contraction_result;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode$$$function_1_listcontraction );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2485b340f281129c398d75630e66ccf6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2485b340f281129c398d75630e66ccf6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2485b340f281129c398d75630e66ccf6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2485b340f281129c398d75630e66ccf6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2485b340f281129c398d75630e66ccf6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2485b340f281129c398d75630e66ccf6, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_2485b340f281129c398d75630e66ccf6, type_description ,par_$0, var_t );

    // Release cached frame.
    if ( frame_2485b340f281129c398d75630e66ccf6 == cache_frame_2485b340f281129c398d75630e66ccf6 )
    {
        Py_DECREF( frame_2485b340f281129c398d75630e66ccf6 );
    }
    cache_frame_2485b340f281129c398d75630e66ccf6 = NULL;

    assertFrameObject( frame_2485b340f281129c398d75630e66ccf6 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode$$$function_1_listcontraction );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode$$$function_1_listcontraction );
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


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$type_check$$$function_1_mintypecode$$$function_2_listcontraction( PyObject **python_pars, PyObject **closure_typeset )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_$0 = python_pars[ 0 ];
    PyObject *var_t = NULL;
    PyObject *tmp_contraction_result = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_a0423c0b36e44065234b90545d76f68e = NULL;

    struct Nuitka_FrameObject *frame_a0423c0b36e44065234b90545d76f68e;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( tmp_contraction_result == NULL );
    tmp_contraction_result = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a0423c0b36e44065234b90545d76f68e, codeobj_a0423c0b36e44065234b90545d76f68e, module_numpy$lib$type_check, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_a0423c0b36e44065234b90545d76f68e = cache_frame_a0423c0b36e44065234b90545d76f68e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a0423c0b36e44065234b90545d76f68e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a0423c0b36e44065234b90545d76f68e ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = par_$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "ooO";
            exception_lineno = 62;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_3;
        Py_INCREF( var_t );
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_t;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = *closure_typeset;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typeset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description = "ooO";
        goto try_except_handler_2;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_append_list_1 = tmp_contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_append_value_1 = var_t;

    if ( tmp_append_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description = "ooO";
        goto try_except_handler_2;
    }

    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description = "ooO";
        goto try_except_handler_2;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description = "ooO";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_contraction_result;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode$$$function_2_listcontraction );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0423c0b36e44065234b90545d76f68e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0423c0b36e44065234b90545d76f68e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0423c0b36e44065234b90545d76f68e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a0423c0b36e44065234b90545d76f68e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a0423c0b36e44065234b90545d76f68e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a0423c0b36e44065234b90545d76f68e, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_a0423c0b36e44065234b90545d76f68e, type_description ,par_$0, var_t, closure_typeset );

    // Release cached frame.
    if ( frame_a0423c0b36e44065234b90545d76f68e == cache_frame_a0423c0b36e44065234b90545d76f68e )
    {
        Py_DECREF( frame_a0423c0b36e44065234b90545d76f68e );
    }
    cache_frame_a0423c0b36e44065234b90545d76f68e = NULL;

    assertFrameObject( frame_a0423c0b36e44065234b90545d76f68e );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode$$$function_2_listcontraction );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_1_mintypecode$$$function_2_listcontraction );
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


static PyObject *impl_numpy$lib$type_check$$$function_2_asfarray( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_bd311de121cbf6b17244e405fbf346b0 = NULL;

    struct Nuitka_FrameObject *frame_bd311de121cbf6b17244e405fbf346b0;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bd311de121cbf6b17244e405fbf346b0, codeobj_bd311de121cbf6b17244e405fbf346b0, module_numpy$lib$type_check, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_bd311de121cbf6b17244e405fbf346b0 = cache_frame_bd311de121cbf6b17244e405fbf346b0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bd311de121cbf6b17244e405fbf346b0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bd311de121cbf6b17244e405fbf346b0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_obj2sctype );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_dtype;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    frame_bd311de121cbf6b17244e405fbf346b0->m_frame.f_lineno = 101;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_dtype;
        par_dtype = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = par_dtype;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inexact );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_bd311de121cbf6b17244e405fbf346b0->m_frame.f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 102;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_float_ );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_dtype;
        par_dtype = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_dtype;
    tmp_dict_value_1 = par_dtype;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_bd311de121cbf6b17244e405fbf346b0->m_frame.f_lineno = 104;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd311de121cbf6b17244e405fbf346b0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd311de121cbf6b17244e405fbf346b0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd311de121cbf6b17244e405fbf346b0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bd311de121cbf6b17244e405fbf346b0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bd311de121cbf6b17244e405fbf346b0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bd311de121cbf6b17244e405fbf346b0, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_bd311de121cbf6b17244e405fbf346b0, type_description ,par_a, par_dtype );

    // Release cached frame.
    if ( frame_bd311de121cbf6b17244e405fbf346b0 == cache_frame_bd311de121cbf6b17244e405fbf346b0 )
    {
        Py_DECREF( frame_bd311de121cbf6b17244e405fbf346b0 );
    }
    cache_frame_bd311de121cbf6b17244e405fbf346b0 = NULL;

    assertFrameObject( frame_bd311de121cbf6b17244e405fbf346b0 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_2_asfarray );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_2_asfarray );
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


static PyObject *impl_numpy$lib$type_check$$$function_3_real( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_4c819b75376fdbc14ad0acba1f1f8d54 = NULL;

    struct Nuitka_FrameObject *frame_4c819b75376fdbc14ad0acba1f1f8d54;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4c819b75376fdbc14ad0acba1f1f8d54, codeobj_4c819b75376fdbc14ad0acba1f1f8d54, module_numpy$lib$type_check, sizeof(PyObject *) );
    frame_4c819b75376fdbc14ad0acba1f1f8d54 = cache_frame_4c819b75376fdbc14ad0acba1f1f8d54;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4c819b75376fdbc14ad0acba1f1f8d54 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4c819b75376fdbc14ad0acba1f1f8d54 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_val;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_real );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description = "o";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_3_real );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_4c819b75376fdbc14ad0acba1f1f8d54, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_4c819b75376fdbc14ad0acba1f1f8d54, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description = "o";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asanyarray" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description = "o";
        goto try_except_handler_3;
    }

    tmp_args_element_name_1 = par_val;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description = "o";
        goto try_except_handler_3;
    }

    frame_4c819b75376fdbc14ad0acba1f1f8d54->m_frame.f_lineno = 145;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description = "o";
        goto try_except_handler_3;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_real );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description = "o";
        goto try_except_handler_3;
    }
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_4c819b75376fdbc14ad0acba1f1f8d54->m_frame) frame_4c819b75376fdbc14ad0acba1f1f8d54->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "o";
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_3_real );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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

#if 1
    RESTORE_FRAME_EXCEPTION( frame_4c819b75376fdbc14ad0acba1f1f8d54 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_4c819b75376fdbc14ad0acba1f1f8d54 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_4c819b75376fdbc14ad0acba1f1f8d54 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4c819b75376fdbc14ad0acba1f1f8d54, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4c819b75376fdbc14ad0acba1f1f8d54->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4c819b75376fdbc14ad0acba1f1f8d54, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_4c819b75376fdbc14ad0acba1f1f8d54, type_description ,par_val );

    // Release cached frame.
    if ( frame_4c819b75376fdbc14ad0acba1f1f8d54 == cache_frame_4c819b75376fdbc14ad0acba1f1f8d54 )
    {
        Py_DECREF( frame_4c819b75376fdbc14ad0acba1f1f8d54 );
    }
    cache_frame_4c819b75376fdbc14ad0acba1f1f8d54 = NULL;

    assertFrameObject( frame_4c819b75376fdbc14ad0acba1f1f8d54 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_3_real );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_val );
    par_val = NULL;

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

    Py_XDECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_3_real );
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


static PyObject *impl_numpy$lib$type_check$$$function_4_imag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_d9645e0047f7255704acf33ac9cdc93b = NULL;

    struct Nuitka_FrameObject *frame_d9645e0047f7255704acf33ac9cdc93b;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9645e0047f7255704acf33ac9cdc93b, codeobj_d9645e0047f7255704acf33ac9cdc93b, module_numpy$lib$type_check, sizeof(PyObject *) );
    frame_d9645e0047f7255704acf33ac9cdc93b = cache_frame_d9645e0047f7255704acf33ac9cdc93b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9645e0047f7255704acf33ac9cdc93b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9645e0047f7255704acf33ac9cdc93b ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_val;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_imag );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description = "o";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_4_imag );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_d9645e0047f7255704acf33ac9cdc93b, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_d9645e0047f7255704acf33ac9cdc93b, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description = "o";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asanyarray" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description = "o";
        goto try_except_handler_3;
    }

    tmp_args_element_name_1 = par_val;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description = "o";
        goto try_except_handler_3;
    }

    frame_d9645e0047f7255704acf33ac9cdc93b->m_frame.f_lineno = 183;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description = "o";
        goto try_except_handler_3;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_imag );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description = "o";
        goto try_except_handler_3;
    }
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_d9645e0047f7255704acf33ac9cdc93b->m_frame) frame_d9645e0047f7255704acf33ac9cdc93b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "o";
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_4_imag );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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

#if 1
    RESTORE_FRAME_EXCEPTION( frame_d9645e0047f7255704acf33ac9cdc93b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_d9645e0047f7255704acf33ac9cdc93b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_d9645e0047f7255704acf33ac9cdc93b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9645e0047f7255704acf33ac9cdc93b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9645e0047f7255704acf33ac9cdc93b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9645e0047f7255704acf33ac9cdc93b, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_d9645e0047f7255704acf33ac9cdc93b, type_description ,par_val );

    // Release cached frame.
    if ( frame_d9645e0047f7255704acf33ac9cdc93b == cache_frame_d9645e0047f7255704acf33ac9cdc93b )
    {
        Py_DECREF( frame_d9645e0047f7255704acf33ac9cdc93b );
    }
    cache_frame_d9645e0047f7255704acf33ac9cdc93b = NULL;

    assertFrameObject( frame_d9645e0047f7255704acf33ac9cdc93b );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_4_imag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_val );
    par_val = NULL;

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

    Py_XDECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_4_imag );
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


static PyObject *impl_numpy$lib$type_check$$$function_5_iscomplex( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_ax = NULL;
    PyObject *var_res = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_0e6eddaa808de2fd15e7f4cd4f2a6994 = NULL;

    struct Nuitka_FrameObject *frame_0e6eddaa808de2fd15e7f4cd4f2a6994;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0e6eddaa808de2fd15e7f4cd4f2a6994, codeobj_0e6eddaa808de2fd15e7f4cd4f2a6994, module_numpy$lib$type_check, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_0e6eddaa808de2fd15e7f4cd4f2a6994 = cache_frame_0e6eddaa808de2fd15e7f4cd4f2a6994;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0e6eddaa808de2fd15e7f4cd4f2a6994 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0e6eddaa808de2fd15e7f4cd4f2a6994 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asanyarray" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_0e6eddaa808de2fd15e7f4cd4f2a6994->m_frame.f_lineno = 215;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_ax == NULL );
    var_ax = tmp_assign_source_1;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_2 = var_ax;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_complexfloating );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 216;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_0e6eddaa808de2fd15e7f4cd4f2a6994->m_frame.f_lineno = 216;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 216;
        type_description = "ooo";
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
    tmp_source_name_4 = var_ax;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ax" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_imag );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_zeros );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = var_ax;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ax" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = (PyObject *)&PyBool_Type;
    frame_0e6eddaa808de2fd15e7f4cd4f2a6994->m_frame.f_lineno = 218;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_2;

    tmp_operand_name_1 = var_res;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_return_value = UNARY_OPERATION( PyNumber_Positive, tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e6eddaa808de2fd15e7f4cd4f2a6994 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e6eddaa808de2fd15e7f4cd4f2a6994 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e6eddaa808de2fd15e7f4cd4f2a6994 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0e6eddaa808de2fd15e7f4cd4f2a6994, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0e6eddaa808de2fd15e7f4cd4f2a6994->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0e6eddaa808de2fd15e7f4cd4f2a6994, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_0e6eddaa808de2fd15e7f4cd4f2a6994, type_description ,par_x, var_ax, var_res );

    // Release cached frame.
    if ( frame_0e6eddaa808de2fd15e7f4cd4f2a6994 == cache_frame_0e6eddaa808de2fd15e7f4cd4f2a6994 )
    {
        Py_DECREF( frame_0e6eddaa808de2fd15e7f4cd4f2a6994 );
    }
    cache_frame_0e6eddaa808de2fd15e7f4cd4f2a6994 = NULL;

    assertFrameObject( frame_0e6eddaa808de2fd15e7f4cd4f2a6994 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_5_iscomplex );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_ax );
    var_ax = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_ax );
    var_ax = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_5_iscomplex );
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


static PyObject *impl_numpy$lib$type_check$$$function_6_isreal( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_0536d3d5873a8ff77acecaafe5d0d047 = NULL;

    struct Nuitka_FrameObject *frame_0536d3d5873a8ff77acecaafe5d0d047;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0536d3d5873a8ff77acecaafe5d0d047, codeobj_0536d3d5873a8ff77acecaafe5d0d047, module_numpy$lib$type_check, sizeof(PyObject *) );
    frame_0536d3d5873a8ff77acecaafe5d0d047 = cache_frame_0536d3d5873a8ff77acecaafe5d0d047;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0536d3d5873a8ff77acecaafe5d0d047 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0536d3d5873a8ff77acecaafe5d0d047 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_imag );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_imag );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "imag" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_0536d3d5873a8ff77acecaafe5d0d047->m_frame.f_lineno = 249;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0536d3d5873a8ff77acecaafe5d0d047 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0536d3d5873a8ff77acecaafe5d0d047 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0536d3d5873a8ff77acecaafe5d0d047 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0536d3d5873a8ff77acecaafe5d0d047, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0536d3d5873a8ff77acecaafe5d0d047->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0536d3d5873a8ff77acecaafe5d0d047, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_0536d3d5873a8ff77acecaafe5d0d047, type_description ,par_x );

    // Release cached frame.
    if ( frame_0536d3d5873a8ff77acecaafe5d0d047 == cache_frame_0536d3d5873a8ff77acecaafe5d0d047 )
    {
        Py_DECREF( frame_0536d3d5873a8ff77acecaafe5d0d047 );
    }
    cache_frame_0536d3d5873a8ff77acecaafe5d0d047 = NULL;

    assertFrameObject( frame_0536d3d5873a8ff77acecaafe5d0d047 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_6_isreal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_6_isreal );
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


static PyObject *impl_numpy$lib$type_check$$$function_7_iscomplexobj( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_dtype = NULL;
    PyObject *var_type_ = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_f37ff8c0011137c77b526aa4746c12ff = NULL;

    struct Nuitka_FrameObject *frame_f37ff8c0011137c77b526aa4746c12ff;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f37ff8c0011137c77b526aa4746c12ff, codeobj_f37ff8c0011137c77b526aa4746c12ff, module_numpy$lib$type_check, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_f37ff8c0011137c77b526aa4746c12ff = cache_frame_f37ff8c0011137c77b526aa4746c12ff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f37ff8c0011137c77b526aa4746c12ff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f37ff8c0011137c77b526aa4746c12ff ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_x;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description = "ooo";
        goto try_except_handler_2;
    }
    assert( var_dtype == NULL );
    var_dtype = tmp_assign_source_1;

    tmp_source_name_2 = var_dtype;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_type );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description = "ooo";
        goto try_except_handler_2;
    }
    assert( var_type_ == NULL );
    var_type_ = tmp_assign_source_2;

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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_f37ff8c0011137c77b526aa4746c12ff, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_f37ff8c0011137c77b526aa4746c12ff, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description = "ooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description = "ooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_1 = par_x;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description = "ooo";
        goto try_except_handler_3;
    }

    frame_f37ff8c0011137c77b526aa4746c12ff->m_frame.f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description = "ooo";
        goto try_except_handler_3;
    }
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description = "ooo";
        goto try_except_handler_3;
    }
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_type );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description = "ooo";
        goto try_except_handler_3;
    }
    assert( var_type_ == NULL );
    var_type_ = tmp_assign_source_3;

    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_f37ff8c0011137c77b526aa4746c12ff->m_frame) frame_f37ff8c0011137c77b526aa4746c12ff->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "ooo";
    goto try_except_handler_3;
    branch_end_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_7_iscomplexobj );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = var_type_;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "type_" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_complexfloating );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_f37ff8c0011137c77b526aa4746c12ff->m_frame.f_lineno = 288;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f37ff8c0011137c77b526aa4746c12ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_f37ff8c0011137c77b526aa4746c12ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f37ff8c0011137c77b526aa4746c12ff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f37ff8c0011137c77b526aa4746c12ff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f37ff8c0011137c77b526aa4746c12ff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f37ff8c0011137c77b526aa4746c12ff, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_f37ff8c0011137c77b526aa4746c12ff, type_description ,par_x, var_dtype, var_type_ );

    // Release cached frame.
    if ( frame_f37ff8c0011137c77b526aa4746c12ff == cache_frame_f37ff8c0011137c77b526aa4746c12ff )
    {
        Py_DECREF( frame_f37ff8c0011137c77b526aa4746c12ff );
    }
    cache_frame_f37ff8c0011137c77b526aa4746c12ff = NULL;

    assertFrameObject( frame_f37ff8c0011137c77b526aa4746c12ff );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_7_iscomplexobj );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_type_ );
    var_type_ = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_type_ );
    var_type_ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_7_iscomplexobj );
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


static PyObject *impl_numpy$lib$type_check$$$function_8_isrealobj( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_9d8341cb390cec1a5f4dee0817819a11 = NULL;

    struct Nuitka_FrameObject *frame_9d8341cb390cec1a5f4dee0817819a11;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9d8341cb390cec1a5f4dee0817819a11, codeobj_9d8341cb390cec1a5f4dee0817819a11, module_numpy$lib$type_check, sizeof(PyObject *) );
    frame_9d8341cb390cec1a5f4dee0817819a11 = cache_frame_9d8341cb390cec1a5f4dee0817819a11;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d8341cb390cec1a5f4dee0817819a11 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d8341cb390cec1a5f4dee0817819a11 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_iscomplexobj );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplexobj );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "iscomplexobj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 323;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_9d8341cb390cec1a5f4dee0817819a11->m_frame.f_lineno = 323;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d8341cb390cec1a5f4dee0817819a11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d8341cb390cec1a5f4dee0817819a11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d8341cb390cec1a5f4dee0817819a11 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d8341cb390cec1a5f4dee0817819a11, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d8341cb390cec1a5f4dee0817819a11->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d8341cb390cec1a5f4dee0817819a11, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_9d8341cb390cec1a5f4dee0817819a11, type_description ,par_x );

    // Release cached frame.
    if ( frame_9d8341cb390cec1a5f4dee0817819a11 == cache_frame_9d8341cb390cec1a5f4dee0817819a11 )
    {
        Py_DECREF( frame_9d8341cb390cec1a5f4dee0817819a11 );
    }
    cache_frame_9d8341cb390cec1a5f4dee0817819a11 = NULL;

    assertFrameObject( frame_9d8341cb390cec1a5f4dee0817819a11 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_8_isrealobj );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_8_isrealobj );
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


static PyObject *impl_numpy$lib$type_check$$$function_9__getmaxmin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    PyObject *var_getlimits = NULL;
    PyObject *var_f = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_5265611164c36681619f84c6e4047cac = NULL;

    struct Nuitka_FrameObject *frame_5265611164c36681619f84c6e4047cac;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5265611164c36681619f84c6e4047cac, codeobj_5265611164c36681619f84c6e4047cac, module_numpy$lib$type_check, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_5265611164c36681619f84c6e4047cac = cache_frame_5265611164c36681619f84c6e4047cac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5265611164c36681619f84c6e4047cac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5265611164c36681619f84c6e4047cac ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
    tmp_globals_name_1 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_getlimits_tuple;
    tmp_level_name_1 = const_int_0;
    frame_5265611164c36681619f84c6e4047cac->m_frame.f_lineno = 328;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_getlimits );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_getlimits == NULL );
    var_getlimits = tmp_assign_source_1;

    tmp_source_name_1 = var_getlimits;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_finfo );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_t;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 329;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    frame_5265611164c36681619f84c6e4047cac->m_frame.f_lineno = 329;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_f == NULL );
    var_f = tmp_assign_source_2;

    tmp_return_value = PyTuple_New( 2 );
    tmp_source_name_2 = var_f;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_max );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 330;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = var_f;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 330;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_min );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 330;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5265611164c36681619f84c6e4047cac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5265611164c36681619f84c6e4047cac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5265611164c36681619f84c6e4047cac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5265611164c36681619f84c6e4047cac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5265611164c36681619f84c6e4047cac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5265611164c36681619f84c6e4047cac, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_5265611164c36681619f84c6e4047cac, type_description ,par_t, var_getlimits, var_f );

    // Release cached frame.
    if ( frame_5265611164c36681619f84c6e4047cac == cache_frame_5265611164c36681619f84c6e4047cac )
    {
        Py_DECREF( frame_5265611164c36681619f84c6e4047cac );
    }
    cache_frame_5265611164c36681619f84c6e4047cac = NULL;

    assertFrameObject( frame_5265611164c36681619f84c6e4047cac );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_9__getmaxmin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_t );
    par_t = NULL;

    Py_XDECREF( var_getlimits );
    var_getlimits = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

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

    Py_XDECREF( par_t );
    par_t = NULL;

    Py_XDECREF( var_getlimits );
    var_getlimits = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_9__getmaxmin );
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


static PyObject *impl_numpy$lib$type_check$$$function_10_nan_to_num( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_copy = python_pars[ 1 ];
    PyObject *var_xtype = NULL;
    PyObject *var_iscomplex = NULL;
    PyObject *var_isscalar = NULL;
    PyObject *var_dest = NULL;
    PyObject *var_maxf = NULL;
    PyObject *var_minf = NULL;
    PyObject *var_d = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_81b670accef114e7d4d53aac69297147 = NULL;

    struct Nuitka_FrameObject *frame_81b670accef114e7d4d53aac69297147;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_81b670accef114e7d4d53aac69297147, codeobj_81b670accef114e7d4d53aac69297147, module_numpy$lib$type_check, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_81b670accef114e7d4d53aac69297147 = cache_frame_81b670accef114e7d4d53aac69297147;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_81b670accef114e7d4d53aac69297147 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_81b670accef114e7d4d53aac69297147 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_x;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_subok;
    tmp_dict_value_1 = Py_True;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_copy;
    tmp_dict_value_2 = par_copy;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "copy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_81b670accef114e7d4d53aac69297147->m_frame.f_lineno = 385;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_x;
        par_x = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_source_name_3 = par_x;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_type );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_xtype == NULL );
    var_xtype = tmp_assign_source_2;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_1 = var_xtype;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 387;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_inexact );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_81b670accef114e7d4d53aac69297147->m_frame.f_lineno = 387;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 387;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = par_x;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_3 = var_xtype;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "xtype" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_complexfloating );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_81b670accef114e7d4d53aac69297147->m_frame.f_lineno = 390;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_iscomplex == NULL );
    var_iscomplex = tmp_assign_source_3;

    tmp_source_name_6 = par_x;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_assign_source_4 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_isscalar == NULL );
    var_isscalar = tmp_assign_source_4;

    tmp_cond_value_2 = var_isscalar;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_subscribed_name_1 = par_x;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 393;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = Py_None;
    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_5 = par_x;

    if ( tmp_assign_source_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 393;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_assign_source_5 );
    condexpr_end_1:;
    {
        PyObject *old = par_x;
        par_x = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_cond_value_3 = var_iscomplex;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "iscomplex" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 394;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_assign_source_6 = PyTuple_New( 2 );
    tmp_source_name_7 = par_x;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_real );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        exception_lineno = 394;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_6, 0, tmp_tuple_element_2 );
    tmp_source_name_8 = par_x;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 394;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_imag );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        exception_lineno = 394;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_6, 1, tmp_tuple_element_2 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_6 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_x;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_6, 0, tmp_tuple_element_3 );
    condexpr_end_2:;
    assert( var_dest == NULL );
    var_dest = tmp_assign_source_6;

    // Tried code:
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__getmaxmin );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__getmaxmin );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_getmaxmin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 395;
        type_description = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_10 = par_x;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 395;
        type_description = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_real );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        type_description = "ooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dtype );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        type_description = "ooooooooo";
        goto try_except_handler_2;
    }
    frame_81b670accef114e7d4d53aac69297147->m_frame.f_lineno = 395;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        type_description = "ooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        type_description = "ooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description = "ooooooooo";
        exception_lineno = 395;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description = "ooooooooo";
        exception_lineno = 395;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description = "ooooooooo";
                exception_lineno = 395;
                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description = "ooooooooo";
        exception_lineno = 395;
        goto try_except_handler_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_10 );
    assert( var_maxf == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_maxf = tmp_assign_source_10;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_11 );
    assert( var_minf == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_minf = tmp_assign_source_11;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_iter_arg_2 = var_dest;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 396;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_12;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "ooooooooo";
            exception_lineno = 396;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = var_d;
        var_d = tmp_assign_source_14;
        Py_INCREF( var_d );
        Py_XDECREF( old );
    }

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 397;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_copyto );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_d;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 397;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_float_0_0;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_3 = const_str_plain_where;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isnan );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isnan );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isnan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 397;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_6 = var_d;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 397;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    frame_81b670accef114e7d4d53aac69297147->m_frame.f_lineno = 397;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_dict_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 397;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_81b670accef114e7d4d53aac69297147->m_frame.f_lineno = 397;
    tmp_unused = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 398;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_copyto );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_d;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 398;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_maxf;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "maxf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 398;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_dict_key_4 = const_str_plain_where;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isposinf );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isposinf );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isposinf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 398;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_7 = var_d;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 398;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    frame_81b670accef114e7d4d53aac69297147->m_frame.f_lineno = 398;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_dict_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 398;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_81b670accef114e7d4d53aac69297147->m_frame.f_lineno = 398;
    tmp_unused = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_copyto );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }
    tmp_args_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_d;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_minf;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "minf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
    tmp_kw_name_4 = _PyDict_NewPresized( 1 );
    tmp_dict_key_5 = const_str_plain_where;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isneginf );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isneginf );
    }

    if ( tmp_called_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isneginf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_8 = var_d;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }

    frame_81b670accef114e7d4d53aac69297147->m_frame.f_lineno = 399;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );

        exception_lineno = 399;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    frame_81b670accef114e7d4d53aac69297147->m_frame.f_lineno = 399;
    tmp_unused = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        type_description = "ooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_cond_value_4 = var_isscalar;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "isscalar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_subscribed_name_2 = par_x;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_return_value = par_x;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    condexpr_end_3:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b670accef114e7d4d53aac69297147 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b670accef114e7d4d53aac69297147 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b670accef114e7d4d53aac69297147 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_81b670accef114e7d4d53aac69297147, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_81b670accef114e7d4d53aac69297147->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_81b670accef114e7d4d53aac69297147, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_81b670accef114e7d4d53aac69297147, type_description ,par_x, par_copy, var_xtype, var_iscomplex, var_isscalar, var_dest, var_maxf, var_minf, var_d );

    // Release cached frame.
    if ( frame_81b670accef114e7d4d53aac69297147 == cache_frame_81b670accef114e7d4d53aac69297147 )
    {
        Py_DECREF( frame_81b670accef114e7d4d53aac69297147 );
    }
    cache_frame_81b670accef114e7d4d53aac69297147 = NULL;

    assertFrameObject( frame_81b670accef114e7d4d53aac69297147 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_10_nan_to_num );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_copy );
    par_copy = NULL;

    Py_XDECREF( var_xtype );
    var_xtype = NULL;

    Py_XDECREF( var_iscomplex );
    var_iscomplex = NULL;

    Py_XDECREF( var_isscalar );
    var_isscalar = NULL;

    Py_XDECREF( var_dest );
    var_dest = NULL;

    Py_XDECREF( var_maxf );
    var_maxf = NULL;

    Py_XDECREF( var_minf );
    var_minf = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_copy );
    par_copy = NULL;

    Py_XDECREF( var_xtype );
    var_xtype = NULL;

    Py_XDECREF( var_iscomplex );
    var_iscomplex = NULL;

    Py_XDECREF( var_isscalar );
    var_isscalar = NULL;

    Py_XDECREF( var_dest );
    var_dest = NULL;

    Py_XDECREF( var_maxf );
    var_maxf = NULL;

    Py_XDECREF( var_minf );
    var_minf = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_10_nan_to_num );
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


static PyObject *impl_numpy$lib$type_check$$$function_11_real_if_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_tol = python_pars[ 1 ];
    PyObject *var_getlimits = NULL;
    PyObject *var_f = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    static struct Nuitka_FrameObject *cache_frame_c0b24689e09f6391811129565c5f81eb = NULL;

    struct Nuitka_FrameObject *frame_c0b24689e09f6391811129565c5f81eb;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c0b24689e09f6391811129565c5f81eb, codeobj_c0b24689e09f6391811129565c5f81eb, module_numpy$lib$type_check, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_c0b24689e09f6391811129565c5f81eb = cache_frame_c0b24689e09f6391811129565c5f81eb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c0b24689e09f6391811129565c5f81eb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c0b24689e09f6391811129565c5f81eb ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asanyarray" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 447;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_c0b24689e09f6391811129565c5f81eb->m_frame.f_lineno = 447;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 447;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        par_a = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_2 = par_a;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 448;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_complexfloating );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 448;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    frame_c0b24689e09f6391811129565c5f81eb->m_frame.f_lineno = 448;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 448;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = par_a;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 449;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_1 = par_tol;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tol" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 450;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 450;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_name_name_1 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
    tmp_globals_name_1 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_getlimits_tuple;
    tmp_level_name_1 = const_int_0;
    frame_c0b24689e09f6391811129565c5f81eb->m_frame.f_lineno = 451;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_getlimits );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_getlimits == NULL );
    var_getlimits = tmp_assign_source_2;

    tmp_source_name_4 = var_getlimits;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_finfo );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_a;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 452;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 452;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_type );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 452;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    frame_c0b24689e09f6391811129565c5f81eb->m_frame.f_lineno = 452;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_f == NULL );
    var_f = tmp_assign_source_3;

    tmp_source_name_7 = var_f;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_eps );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 453;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_tol;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tol" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 453;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 453;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_tol;
        par_tol = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 454;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_all );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 454;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 454;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_absolute );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 454;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_a;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 454;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_imag );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 454;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    frame_c0b24689e09f6391811129565c5f81eb->m_frame.f_lineno = 454;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 454;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = par_tol;

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tol" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 454;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 454;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    frame_c0b24689e09f6391811129565c5f81eb->m_frame.f_lineno = 454;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 454;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 454;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_11 = par_a;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 455;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_real );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        par_a = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_return_value = par_a;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 456;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0b24689e09f6391811129565c5f81eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0b24689e09f6391811129565c5f81eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0b24689e09f6391811129565c5f81eb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c0b24689e09f6391811129565c5f81eb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c0b24689e09f6391811129565c5f81eb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c0b24689e09f6391811129565c5f81eb, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_c0b24689e09f6391811129565c5f81eb, type_description ,par_a, par_tol, var_getlimits, var_f );

    // Release cached frame.
    if ( frame_c0b24689e09f6391811129565c5f81eb == cache_frame_c0b24689e09f6391811129565c5f81eb )
    {
        Py_DECREF( frame_c0b24689e09f6391811129565c5f81eb );
    }
    cache_frame_c0b24689e09f6391811129565c5f81eb = NULL;

    assertFrameObject( frame_c0b24689e09f6391811129565c5f81eb );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_11_real_if_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_getlimits );
    var_getlimits = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_getlimits );
    var_getlimits = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_11_real_if_close );
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


static PyObject *impl_numpy$lib$type_check$$$function_12_asscalar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_6dc14b438e27aff97d48fbde0ab908a6 = NULL;

    struct Nuitka_FrameObject *frame_6dc14b438e27aff97d48fbde0ab908a6;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6dc14b438e27aff97d48fbde0ab908a6, codeobj_6dc14b438e27aff97d48fbde0ab908a6, module_numpy$lib$type_check, sizeof(PyObject *) );
    frame_6dc14b438e27aff97d48fbde0ab908a6 = cache_frame_6dc14b438e27aff97d48fbde0ab908a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6dc14b438e27aff97d48fbde0ab908a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6dc14b438e27aff97d48fbde0ab908a6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_a;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_6dc14b438e27aff97d48fbde0ab908a6->m_frame.f_lineno = 480;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_item );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 480;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6dc14b438e27aff97d48fbde0ab908a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6dc14b438e27aff97d48fbde0ab908a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6dc14b438e27aff97d48fbde0ab908a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6dc14b438e27aff97d48fbde0ab908a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6dc14b438e27aff97d48fbde0ab908a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6dc14b438e27aff97d48fbde0ab908a6, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_6dc14b438e27aff97d48fbde0ab908a6, type_description ,par_a );

    // Release cached frame.
    if ( frame_6dc14b438e27aff97d48fbde0ab908a6 == cache_frame_6dc14b438e27aff97d48fbde0ab908a6 )
    {
        Py_DECREF( frame_6dc14b438e27aff97d48fbde0ab908a6 );
    }
    cache_frame_6dc14b438e27aff97d48fbde0ab908a6 = NULL;

    assertFrameObject( frame_6dc14b438e27aff97d48fbde0ab908a6 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_12_asscalar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_12_asscalar );
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


static PyObject *impl_numpy$lib$type_check$$$function_13_typename( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_char = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_5f6730341bc22c15403ad34ffbf0c3cc = NULL;

    struct Nuitka_FrameObject *frame_5f6730341bc22c15403ad34ffbf0c3cc;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5f6730341bc22c15403ad34ffbf0c3cc, codeobj_5f6730341bc22c15403ad34ffbf0c3cc, module_numpy$lib$type_check, sizeof(PyObject *) );
    frame_5f6730341bc22c15403ad34ffbf0c3cc = cache_frame_5f6730341bc22c15403ad34ffbf0c3cc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5f6730341bc22c15403ad34ffbf0c3cc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5f6730341bc22c15403ad34ffbf0c3cc ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__namefromtype );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__namefromtype );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_namefromtype" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 557;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = par_char;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 557;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f6730341bc22c15403ad34ffbf0c3cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f6730341bc22c15403ad34ffbf0c3cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f6730341bc22c15403ad34ffbf0c3cc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5f6730341bc22c15403ad34ffbf0c3cc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5f6730341bc22c15403ad34ffbf0c3cc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5f6730341bc22c15403ad34ffbf0c3cc, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_5f6730341bc22c15403ad34ffbf0c3cc, type_description ,par_char );

    // Release cached frame.
    if ( frame_5f6730341bc22c15403ad34ffbf0c3cc == cache_frame_5f6730341bc22c15403ad34ffbf0c3cc )
    {
        Py_DECREF( frame_5f6730341bc22c15403ad34ffbf0c3cc );
    }
    cache_frame_5f6730341bc22c15403ad34ffbf0c3cc = NULL;

    assertFrameObject( frame_5f6730341bc22c15403ad34ffbf0c3cc );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_13_typename );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_char );
    par_char = NULL;

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

    Py_XDECREF( par_char );
    par_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_13_typename );
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


static PyObject *impl_numpy$lib$type_check$$$function_14_common_type( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arrays = python_pars[ 0 ];
    PyObject *var_is_complex = NULL;
    PyObject *var_precision = NULL;
    PyObject *var_a = NULL;
    PyObject *var_t = NULL;
    PyObject *var_p = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    static struct Nuitka_FrameObject *cache_frame_f99900f15e65b92adb654915f64fb847 = NULL;

    struct Nuitka_FrameObject *frame_f99900f15e65b92adb654915f64fb847;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_False;
    assert( var_is_complex == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_is_complex = tmp_assign_source_1;

    tmp_assign_source_2 = const_int_0;
    assert( var_precision == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_precision = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f99900f15e65b92adb654915f64fb847, codeobj_f99900f15e65b92adb654915f64fb847, module_numpy$lib$type_check, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_f99900f15e65b92adb654915f64fb847 = cache_frame_f99900f15e65b92adb654915f64fb847;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f99900f15e65b92adb654915f64fb847 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f99900f15e65b92adb654915f64fb847 ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = par_arrays;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 609;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooo";
            exception_lineno = 609;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_5;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_a;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 610;
        type_description = "oooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_type );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 610;
        type_description = "oooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_iscomplexobj );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplexobj );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "iscomplexobj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 611;
        type_description = "oooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_a;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 611;
        type_description = "oooooo";
        goto try_except_handler_2;
    }

    frame_f99900f15e65b92adb654915f64fb847->m_frame.f_lineno = 611;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 611;
        type_description = "oooooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 611;
        type_description = "oooooo";
        goto try_except_handler_2;
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
    tmp_assign_source_7 = Py_True;
    {
        PyObject *old = var_is_complex;
        var_is_complex = tmp_assign_source_7;
        Py_INCREF( var_is_complex );
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = var_t;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 613;
        type_description = "oooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 613;
        type_description = "oooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_integer );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 613;
        type_description = "oooooo";
        goto try_except_handler_2;
    }
    frame_f99900f15e65b92adb654915f64fb847->m_frame.f_lineno = 613;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 613;
        type_description = "oooooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 613;
        type_description = "oooooo";
        goto try_except_handler_2;
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
    tmp_assign_source_8 = const_int_pos_2;
    {
        PyObject *old = var_p;
        var_p = tmp_assign_source_8;
        Py_INCREF( var_p );
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_precision );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_precision );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_precision" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 616;
        type_description = "oooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 616;
        type_description = "oooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = var_t;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 616;
        type_description = "oooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_5 = Py_None;
    frame_f99900f15e65b92adb654915f64fb847->m_frame.f_lineno = 616;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 616;
        type_description = "oooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_p;
        var_p = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_p;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_1 = const_str_digest_7ba543784f99e89f93fecfed2aa5dab4;
    frame_f99900f15e65b92adb654915f64fb847->m_frame.f_lineno = 618;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 618;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooooo";
    goto try_except_handler_2;
    branch_no_3:;
    branch_end_2:;
    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_4 != NULL );
    tmp_args_element_name_6 = var_precision;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "precision" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 619;
        type_description = "oooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_7 = var_p;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 619;
        type_description = "oooooo";
        goto try_except_handler_2;
    }

    frame_f99900f15e65b92adb654915f64fb847->m_frame.f_lineno = 619;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 619;
        type_description = "oooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_precision;
        var_precision = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 609;
        type_description = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_cond_value_3 = var_is_complex;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "is_complex" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 620;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 620;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_subscribed_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_type );

    if (unlikely( tmp_subscribed_name_2 == NULL ))
    {
        tmp_subscribed_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_type );
    }

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 621;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_pos_1;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 621;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = var_precision;

    if ( tmp_subscript_name_2 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "precision" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 621;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 621;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_subscribed_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_type );

    if (unlikely( tmp_subscribed_name_4 == NULL ))
    {
        tmp_subscribed_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_type );
    }

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 623;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_3 = const_int_0;
    tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_3 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 623;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_4 = var_precision;

    if ( tmp_subscript_name_4 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "precision" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 623;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 623;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f99900f15e65b92adb654915f64fb847 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f99900f15e65b92adb654915f64fb847 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f99900f15e65b92adb654915f64fb847 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f99900f15e65b92adb654915f64fb847, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f99900f15e65b92adb654915f64fb847->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f99900f15e65b92adb654915f64fb847, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_f99900f15e65b92adb654915f64fb847, type_description ,par_arrays, var_is_complex, var_precision, var_a, var_t, var_p );

    // Release cached frame.
    if ( frame_f99900f15e65b92adb654915f64fb847 == cache_frame_f99900f15e65b92adb654915f64fb847 )
    {
        Py_DECREF( frame_f99900f15e65b92adb654915f64fb847 );
    }
    cache_frame_f99900f15e65b92adb654915f64fb847 = NULL;

    assertFrameObject( frame_f99900f15e65b92adb654915f64fb847 );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_14_common_type );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_arrays );
    par_arrays = NULL;

    Py_XDECREF( var_is_complex );
    var_is_complex = NULL;

    Py_XDECREF( var_precision );
    var_precision = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_arrays );
    par_arrays = NULL;

    Py_XDECREF( var_is_complex );
    var_is_complex = NULL;

    Py_XDECREF( var_precision );
    var_precision = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$type_check$$$function_14_common_type );
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



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_10_nan_to_num( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_10_nan_to_num,
        const_str_plain_nan_to_num,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_81b670accef114e7d4d53aac69297147,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_31911ab77898fbef66ec0576fd705fbf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_11_real_if_close( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_11_real_if_close,
        const_str_plain_real_if_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c0b24689e09f6391811129565c5f81eb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_eac0cb7090e335bbb2e16d4595fd4268,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_12_asscalar(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_12_asscalar,
        const_str_plain_asscalar,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6dc14b438e27aff97d48fbde0ab908a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_38e665b4d356a613351958197621fbab,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_13_typename(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_13_typename,
        const_str_plain_typename,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5f6730341bc22c15403ad34ffbf0c3cc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_3b4c0c12f6833fe1bbb4274681095c66,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_14_common_type(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_14_common_type,
        const_str_plain_common_type,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f99900f15e65b92adb654915f64fb847,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_59f0a4a7166fde20d15b9c978d112d4e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_1_mintypecode( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_1_mintypecode,
        const_str_plain_mintypecode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_94cb2d398af63382767a455106cb10b4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_2c2f03b41c77c8842fe2c6d0834f1b1f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_2_asfarray( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_2_asfarray,
        const_str_plain_asfarray,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bd311de121cbf6b17244e405fbf346b0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_d222958b180ec6664eb4b921e35d8304,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_3_real(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_3_real,
        const_str_plain_real,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4c819b75376fdbc14ad0acba1f1f8d54,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_53c8e87729c62cbf7214eb324f01fa8f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_4_imag(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_4_imag,
        const_str_plain_imag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d9645e0047f7255704acf33ac9cdc93b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_1272859cc603905ab5e85e9bc4a21d6d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_5_iscomplex(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_5_iscomplex,
        const_str_plain_iscomplex,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0e6eddaa808de2fd15e7f4cd4f2a6994,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_7d06b9dfb28c50150a23aaf7e4464a27,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_6_isreal(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_6_isreal,
        const_str_plain_isreal,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0536d3d5873a8ff77acecaafe5d0d047,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_ec4d4c426c3014b1bef4c67234b09210,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_7_iscomplexobj(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_7_iscomplexobj,
        const_str_plain_iscomplexobj,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f37ff8c0011137c77b526aa4746c12ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_793dd2dc20fd2ea802f720223d7272d8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_8_isrealobj(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_8_isrealobj,
        const_str_plain_isrealobj,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9d8341cb390cec1a5f4dee0817819a11,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        const_str_digest_4597cf420c1bfdcbc1c8ec3199b90183,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$type_check$$$function_9__getmaxmin(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$type_check$$$function_9__getmaxmin,
        const_str_plain__getmaxmin,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5265611164c36681619f84c6e4047cac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$type_check,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$type_check =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.type_check",   /* m_name */
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

MOD_INIT_DECL( numpy$lib$type_check )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$type_check );
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
    puts("numpy.lib.type_check: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.type_check: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$type_check" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$type_check = Py_InitModule4(
        "numpy.lib.type_check",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib$type_check = PyModule_Create( &mdef_numpy$lib$type_check );
#endif

    moduledict_numpy$lib$type_check = (PyDictObject *)((PyModuleObject *)module_numpy$lib$type_check)->md_dict;

    CHECK_OBJECT( module_numpy$lib$type_check );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f06b0863ac057f993e0b6697d72eaf86, module_numpy$lib$type_check );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$lib$type_check );

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
    PyObject *tmp_import_from_3__module = NULL;
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
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
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
    PyObject *tmp_level_name_4;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_tuple_element_1;
    struct Nuitka_FrameObject *frame_dda4a516b97f2c27c964c8073c3b7f6c;


    // Module code.
    tmp_assign_source_1 = const_str_digest_319fcf66f386c3009026359f595c3662;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_2815393151605fd5612a3110b0a07ce2;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_dda4a516b97f2c27c964c8073c3b7f6c = MAKE_MODULE_FRAME( codeobj_dda4a516b97f2c27c964c8073c3b7f6c, module_numpy$lib$type_check );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_dda4a516b97f2c27c964c8073c3b7f6c );
    assert( Py_REFCNT( frame_dda4a516b97f2c27c964c8073c3b7f6c ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain___future__;
    tmp_globals_name_1 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
    tmp_level_name_1 = const_int_0;
    frame_dda4a516b97f2c27c964c8073c3b7f6c->m_frame.f_lineno = 4;
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

    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    assert( tmp_assign_source_6 != NULL );
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    tmp_assign_source_7 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    assert( tmp_assign_source_7 != NULL );
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    tmp_assign_source_8 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    assert( tmp_assign_source_8 != NULL );
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_8 );
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_assign_source_9 = LIST_COPY( const_list_7408997311a16cd973ccb73960eae3bc_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    tmp_name_name_2 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
    tmp_globals_name_2 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_dda4a516b97f2c27c964c8073c3b7f6c->m_frame.f_lineno = 11;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_import_name_from_1 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_core );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_numeric );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx, tmp_assign_source_10 );
    tmp_name_name_3 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
    tmp_globals_name_3 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_496287f99b1984e9c1a569a9bb4a9ac6_tuple;
    tmp_level_name_3 = const_int_0;
    frame_dda4a516b97f2c27c964c8073c3b7f6c->m_frame.f_lineno = 12;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_asarray );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_12 );
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_asanyarray );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asanyarray, tmp_assign_source_13 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_array );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_14 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_isnan );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isnan, tmp_assign_source_15 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_zeros );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_16 );
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

    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_4 = const_str_plain_ufunclike;
    tmp_globals_name_4 = ((PyModuleObject *)module_numpy$lib$type_check)->md_dict;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_isneginf_str_plain_isposinf_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_dda4a516b97f2c27c964c8073c3b7f6c->m_frame.f_lineno = 13;
    tmp_assign_source_17 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_17;

    // Tried code:
    tmp_import_name_from_8 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_isneginf );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isneginf, tmp_assign_source_18 );
    tmp_import_name_from_9 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_isposinf );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isposinf, tmp_assign_source_19 );
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

    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_assign_source_20 = const_str_digest_6a797a370830505dc73095dcc7cdf3f1;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__typecodes_by_elsize, tmp_assign_source_20 );
    tmp_defaults_1 = const_tuple_str_plain_GDFgdf_str_plain_d_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$type_check$$$function_1_mintypecode( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_mintypecode, tmp_assign_source_21 );
    tmp_defaults_2 = PyTuple_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_defaults_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_float_ );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_2 );

        exception_lineno = 74;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_1 );
    tmp_assign_source_22 = MAKE_FUNCTION_numpy$lib$type_check$$$function_2_asfarray( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asfarray, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_numpy$lib$type_check$$$function_3_real(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_real, tmp_assign_source_23 );
    tmp_assign_source_24 = MAKE_FUNCTION_numpy$lib$type_check$$$function_4_imag(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_imag, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_numpy$lib$type_check$$$function_5_iscomplex(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_iscomplex, tmp_assign_source_25 );
    tmp_assign_source_26 = MAKE_FUNCTION_numpy$lib$type_check$$$function_6_isreal(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isreal, tmp_assign_source_26 );
    tmp_assign_source_27 = MAKE_FUNCTION_numpy$lib$type_check$$$function_7_iscomplexobj(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_iscomplexobj, tmp_assign_source_27 );
    tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$type_check$$$function_8_isrealobj(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_isrealobj, tmp_assign_source_28 );
    tmp_assign_source_29 = MAKE_FUNCTION_numpy$lib$type_check$$$function_9__getmaxmin(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__getmaxmin, tmp_assign_source_29 );
    tmp_defaults_3 = const_tuple_true_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_30 = MAKE_FUNCTION_numpy$lib$type_check$$$function_10_nan_to_num( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_nan_to_num, tmp_assign_source_30 );
    tmp_defaults_4 = const_tuple_int_pos_100_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_31 = MAKE_FUNCTION_numpy$lib$type_check$$$function_11_real_if_close( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_real_if_close, tmp_assign_source_31 );
    tmp_assign_source_32 = MAKE_FUNCTION_numpy$lib$type_check$$$function_12_asscalar(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_asscalar, tmp_assign_source_32 );
    tmp_assign_source_33 = PyDict_Copy( const_dict_6641313163263c73f169be4f088d77be );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__namefromtype, tmp_assign_source_33 );
    tmp_assign_source_34 = MAKE_FUNCTION_numpy$lib$type_check$$$function_13_typename(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_typename, tmp_assign_source_34 );
    tmp_assign_source_35 = PyList_New( 2 );
    tmp_list_element_1 = PyList_New( 4 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 562;

        goto frame_exception_exit_1;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_half );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 562;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 0, tmp_list_element_2 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 562;

        goto frame_exception_exit_1;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_single );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 562;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 1, tmp_list_element_2 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 562;

        goto frame_exception_exit_1;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_double );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 562;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 2, tmp_list_element_2 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 562;

        goto frame_exception_exit_1;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_longdouble );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 562;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 3, tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assign_source_35, 0, tmp_list_element_1 );
    tmp_list_element_1 = PyList_New( 4 );
    tmp_list_element_3 = Py_None;
    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_list_element_1, 0, tmp_list_element_3 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 563;

        goto frame_exception_exit_1;
    }

    tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_csingle );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 563;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 1, tmp_list_element_3 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 563;

        goto frame_exception_exit_1;
    }

    tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_cdouble );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 563;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 2, tmp_list_element_3 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 563;

        goto frame_exception_exit_1;
    }

    tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_clongdouble );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 563;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_1, 3, tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assign_source_35, 1, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_type, tmp_assign_source_35 );
    tmp_assign_source_36 = _PyDict_NewPresized( 7 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 564;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_half );
    if ( tmp_dict_key_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 564;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_1 = const_int_0;
    tmp_res = PyDict_SetItem( tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_key_1 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 564;

        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 565;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_single );
    if ( tmp_dict_key_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 565;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_2 = const_int_pos_1;
    tmp_res = PyDict_SetItem( tmp_assign_source_36, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_key_2 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 564;

        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 566;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_double );
    if ( tmp_dict_key_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 566;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_3 = const_int_pos_2;
    tmp_res = PyDict_SetItem( tmp_assign_source_36, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_key_3 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 564;

        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 567;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_longdouble );
    if ( tmp_dict_key_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 567;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_4 = const_int_pos_3;
    tmp_res = PyDict_SetItem( tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_key_4 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 564;

        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 568;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_csingle );
    if ( tmp_dict_key_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 568;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_5 = const_int_pos_1;
    tmp_res = PyDict_SetItem( tmp_assign_source_36, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_key_5 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 564;

        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 569;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_cdouble );
    if ( tmp_dict_key_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 569;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_6 = const_int_pos_2;
    tmp_res = PyDict_SetItem( tmp_assign_source_36, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_key_6 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 564;

        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 570;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_clongdouble );
    if ( tmp_dict_key_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 570;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_7 = const_int_pos_3;
    tmp_res = PyDict_SetItem( tmp_assign_source_36, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_key_7 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        exception_lineno = 564;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_array_precision, tmp_assign_source_36 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dda4a516b97f2c27c964c8073c3b7f6c );
#endif
    popFrameStack();

    assertFrameObject( frame_dda4a516b97f2c27c964c8073c3b7f6c );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dda4a516b97f2c27c964c8073c3b7f6c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dda4a516b97f2c27c964c8073c3b7f6c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dda4a516b97f2c27c964c8073c3b7f6c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dda4a516b97f2c27c964c8073c3b7f6c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_37 = MAKE_FUNCTION_numpy$lib$type_check$$$function_14_common_type(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$type_check, (Nuitka_StringObject *)const_str_plain_common_type, tmp_assign_source_37 );

    return MOD_RETURN_VALUE( module_numpy$lib$type_check );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
