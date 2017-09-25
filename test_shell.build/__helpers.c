// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 1 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 1; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 1 * sizeof(PyObject *) );
            memcpy( python_pars + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 1 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 1 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 1; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 1 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 1 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 1 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 1, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 1 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 2 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 2; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 2 * sizeof(PyObject *) );
            memcpy( python_pars + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 2 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 2 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 2; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 2 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 2 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 2 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 2, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 2 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 3 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 3; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 3 * sizeof(PyObject *) );
            memcpy( python_pars + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 3 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 3 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 3; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 3 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 3 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 3 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 3, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 3 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 4 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 4; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 4 * sizeof(PyObject *) );
            memcpy( python_pars + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 4 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 4 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 4; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 4 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 4 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 4 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 4, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 4 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 5 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 5; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 5 * sizeof(PyObject *) );
            memcpy( python_pars + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 5 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 5 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 5; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 5 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 5 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 5 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 5, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 5 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 6 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 6; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 6 * sizeof(PyObject *) );
            memcpy( python_pars + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 6 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 6 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 6; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 6 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 6 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 6 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 6, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 6 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 7; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 7 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 7; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 7 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 7 * sizeof(PyObject *) );
            memcpy( python_pars + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 7 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 7 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 7; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 7 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 7 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 7 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 7 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (7 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 7 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (7 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 7 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 7, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            7
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 7 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 8 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 8; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 8 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 8 * sizeof(PyObject *) );
            memcpy( python_pars + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 8 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 8 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 8; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 8 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 8 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 8 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 8 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 8 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 8 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 8, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            8
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 8 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 9; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 9 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 9; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 9 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 9 * sizeof(PyObject *) );
            memcpy( python_pars + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 9 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 9 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 9; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 9 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 9 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 9 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 9 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (9 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 9 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (9 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 9 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 9, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            9
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 9 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS14( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 14; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 14 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 14; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 14 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 14 * sizeof(PyObject *) );
            memcpy( python_pars + 14, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 14 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 14 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 14; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 14 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 14 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 14, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 14 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 14 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (14 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 14 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (14 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 14 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 14, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            14
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 14 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS15( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 15; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 15 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 15; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 15 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 15 * sizeof(PyObject *) );
            memcpy( python_pars + 15, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 15 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 15 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 15; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 15 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 15 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 15, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 15 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 15 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (15 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 15 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (15 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 15 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 15, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            15
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 15 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );
            return CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS1( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS1( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );
            return CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS2( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS2( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS3( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    3
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );
            return CALL_FUNCTION_WITH_ARGS3(
                descr,
                args
            );
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS3( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    3
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS3( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS3( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL( __main__ );
MOD_INIT_DECL( appdirs );
MOD_INIT_DECL( cffi );
MOD_INIT_DECL( cffi$api );
MOD_INIT_DECL( cffi$cffi_opcode );
MOD_INIT_DECL( cffi$commontypes );
MOD_INIT_DECL( cffi$cparser );
MOD_INIT_DECL( cffi$error );
MOD_INIT_DECL( cffi$ffiplatform );
MOD_INIT_DECL( cffi$lock );
MOD_INIT_DECL( cffi$model );
MOD_INIT_DECL( cffi$recompiler );
MOD_INIT_DECL( cffi$vengine_cpy );
MOD_INIT_DECL( cffi$vengine_gen );
MOD_INIT_DECL( cffi$verifier );
MOD_INIT_DECL( colorama );
MOD_INIT_DECL( colorama$ansi );
MOD_INIT_DECL( colorama$ansitowin32 );
MOD_INIT_DECL( colorama$initialise );
MOD_INIT_DECL( colorama$win32 );
MOD_INIT_DECL( colorama$winterm );
MOD_INIT_DECL( header );
MOD_INIT_DECL( inside );
MOD_INIT_DECL( inside$gen );
MOD_INIT_DECL( inside$log );
MOD_INIT_DECL( inside$map );
MOD_INIT_DECL( inside$player );
MOD_INIT_DECL( inside$shell );
MOD_INIT_DECL( inside$util );
MOD_INIT_DECL( numpy );
MOD_INIT_DECL( numpy$__config__ );
MOD_INIT_DECL( numpy$_distributor_init );
MOD_INIT_DECL( numpy$_globals );
MOD_INIT_DECL( numpy$_import_tools );
MOD_INIT_DECL( numpy$add_newdocs );
MOD_INIT_DECL( numpy$compat );
MOD_INIT_DECL( numpy$compat$_inspect );
MOD_INIT_DECL( numpy$compat$py3k );
MOD_INIT_DECL( numpy$core );
MOD_INIT_DECL( numpy$core$_internal );
MOD_INIT_DECL( numpy$core$_methods );
MOD_INIT_DECL( numpy$core$arrayprint );
MOD_INIT_DECL( numpy$core$defchararray );
MOD_INIT_DECL( numpy$core$einsumfunc );
MOD_INIT_DECL( numpy$core$fromnumeric );
MOD_INIT_DECL( numpy$core$function_base );
MOD_INIT_DECL( numpy$core$getlimits );
MOD_INIT_DECL( numpy$core$info );
MOD_INIT_DECL( numpy$core$machar );
MOD_INIT_DECL( numpy$core$memmap );
MOD_INIT_DECL( numpy$core$numeric );
MOD_INIT_DECL( numpy$core$numerictypes );
MOD_INIT_DECL( numpy$core$records );
MOD_INIT_DECL( numpy$core$shape_base );
MOD_INIT_DECL( numpy$ctypeslib );
MOD_INIT_DECL( numpy$dual );
MOD_INIT_DECL( numpy$fft );
MOD_INIT_DECL( numpy$fft$fftpack );
MOD_INIT_DECL( numpy$fft$helper );
MOD_INIT_DECL( numpy$fft$info );
MOD_INIT_DECL( numpy$lib );
MOD_INIT_DECL( numpy$lib$_datasource );
MOD_INIT_DECL( numpy$lib$_iotools );
MOD_INIT_DECL( numpy$lib$_version );
MOD_INIT_DECL( numpy$lib$arraypad );
MOD_INIT_DECL( numpy$lib$arraysetops );
MOD_INIT_DECL( numpy$lib$arrayterator );
MOD_INIT_DECL( numpy$lib$financial );
MOD_INIT_DECL( numpy$lib$format );
MOD_INIT_DECL( numpy$lib$function_base );
MOD_INIT_DECL( numpy$lib$index_tricks );
MOD_INIT_DECL( numpy$lib$info );
MOD_INIT_DECL( numpy$lib$mixins );
MOD_INIT_DECL( numpy$lib$nanfunctions );
MOD_INIT_DECL( numpy$lib$npyio );
MOD_INIT_DECL( numpy$lib$polynomial );
MOD_INIT_DECL( numpy$lib$scimath );
MOD_INIT_DECL( numpy$lib$shape_base );
MOD_INIT_DECL( numpy$lib$stride_tricks );
MOD_INIT_DECL( numpy$lib$twodim_base );
MOD_INIT_DECL( numpy$lib$type_check );
MOD_INIT_DECL( numpy$lib$ufunclike );
MOD_INIT_DECL( numpy$lib$utils );
MOD_INIT_DECL( numpy$linalg );
MOD_INIT_DECL( numpy$linalg$info );
MOD_INIT_DECL( numpy$linalg$linalg );
MOD_INIT_DECL( numpy$ma );
MOD_INIT_DECL( numpy$ma$core );
MOD_INIT_DECL( numpy$ma$extras );
MOD_INIT_DECL( numpy$ma$mrecords );
MOD_INIT_DECL( numpy$matrixlib );
MOD_INIT_DECL( numpy$matrixlib$defmatrix );
MOD_INIT_DECL( numpy$polynomial );
MOD_INIT_DECL( numpy$polynomial$_polybase );
MOD_INIT_DECL( numpy$polynomial$chebyshev );
MOD_INIT_DECL( numpy$polynomial$hermite );
MOD_INIT_DECL( numpy$polynomial$hermite_e );
MOD_INIT_DECL( numpy$polynomial$laguerre );
MOD_INIT_DECL( numpy$polynomial$legendre );
MOD_INIT_DECL( numpy$polynomial$polynomial );
MOD_INIT_DECL( numpy$polynomial$polyutils );
MOD_INIT_DECL( numpy$random );
MOD_INIT_DECL( numpy$random$info );
MOD_INIT_DECL( numpy$version );
MOD_INIT_DECL( packaging );
MOD_INIT_DECL( packaging$__about__ );
MOD_INIT_DECL( pycparser );
MOD_INIT_DECL( pycparser$ast_transforms );
MOD_INIT_DECL( pycparser$c_ast );
MOD_INIT_DECL( pycparser$c_lexer );
MOD_INIT_DECL( pycparser$c_parser );
MOD_INIT_DECL( pycparser$ply );
MOD_INIT_DECL( pycparser$ply$lex );
MOD_INIT_DECL( pycparser$ply$yacc );
MOD_INIT_DECL( pycparser$plyparser );
MOD_INIT_DECL( scipy );
MOD_INIT_DECL( scipy$__config__ );
MOD_INIT_DECL( scipy$_lib );
MOD_INIT_DECL( scipy$_lib$_ccallback );
MOD_INIT_DECL( scipy$_lib$_version );
MOD_INIT_DECL( scipy$_lib$six );
MOD_INIT_DECL( scipy$version );
MOD_INIT_DECL( six );
MOD_INIT_DECL( smarkov );
MOD_INIT_DECL( smarkov$markov );
MOD_INIT_DECL( smarkov$utils );
MOD_INIT_DECL( termcolor );
MOD_INIT_DECL( tinydb );
MOD_INIT_DECL( tinydb$database );
MOD_INIT_DECL( tinydb$queries );
MOD_INIT_DECL( tinydb$storages );
MOD_INIT_DECL( tinydb$utils );
MOD_INIT_DECL( tinydb$version );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { (char *)"__main__", MOD_INIT_NAME( __main__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_asyncio", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_bisect", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_blake2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_cffi_backend", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_codecs_cn", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_codecs_hk", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_codecs_iso2022", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_codecs_jp", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_codecs_kr", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_codecs_tw", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_crypt", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_csv", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_curses", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_curses_panel", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_datetime", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_dbm", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_elementtree", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_gdbm", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_heapq", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_json", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_lsprof", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_lzma", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_multibytecodec", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_opcode", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_pickle", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_posixsubprocess", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_random", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_sha3", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_socket", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_struct", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_tkinter", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"appdirs", MOD_INIT_NAME( appdirs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"array", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"audioop", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"binascii", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"cffi", MOD_INIT_NAME( cffi ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"cffi.api", MOD_INIT_NAME( cffi$api ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cffi.cffi_opcode", MOD_INIT_NAME( cffi$cffi_opcode ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cffi.commontypes", MOD_INIT_NAME( cffi$commontypes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cffi.cparser", MOD_INIT_NAME( cffi$cparser ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cffi.error", MOD_INIT_NAME( cffi$error ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cffi.ffiplatform", MOD_INIT_NAME( cffi$ffiplatform ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cffi.lock", MOD_INIT_NAME( cffi$lock ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cffi.model", MOD_INIT_NAME( cffi$model ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cffi.recompiler", MOD_INIT_NAME( cffi$recompiler ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cffi.vengine_cpy", MOD_INIT_NAME( cffi$vengine_cpy ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cffi.vengine_gen", MOD_INIT_NAME( cffi$vengine_gen ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cffi.verifier", MOD_INIT_NAME( cffi$verifier ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"colorama", MOD_INIT_NAME( colorama ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"colorama.ansi", MOD_INIT_NAME( colorama$ansi ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"colorama.ansitowin32", MOD_INIT_NAME( colorama$ansitowin32 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"colorama.initialise", MOD_INIT_NAME( colorama$initialise ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"colorama.win32", MOD_INIT_NAME( colorama$win32 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"colorama.winterm", MOD_INIT_NAME( colorama$winterm ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"fcntl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"grp", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"header", MOD_INIT_NAME( header ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"inside", MOD_INIT_NAME( inside ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"inside.gen", MOD_INIT_NAME( inside$gen ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"inside.log", MOD_INIT_NAME( inside$log ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"inside.map", MOD_INIT_NAME( inside$map ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"inside.player", MOD_INIT_NAME( inside$player ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"inside.shell", MOD_INIT_NAME( inside$shell ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"inside.util", MOD_INIT_NAME( inside$util ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"math", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"mmap", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"numpy", MOD_INIT_NAME( numpy ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.__config__", MOD_INIT_NAME( numpy$__config__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy._distributor_init", MOD_INIT_NAME( numpy$_distributor_init ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy._globals", MOD_INIT_NAME( numpy$_globals ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy._import_tools", MOD_INIT_NAME( numpy$_import_tools ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.add_newdocs", MOD_INIT_NAME( numpy$add_newdocs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.compat", MOD_INIT_NAME( numpy$compat ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.compat._inspect", MOD_INIT_NAME( numpy$compat$_inspect ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.compat.py3k", MOD_INIT_NAME( numpy$compat$py3k ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core", MOD_INIT_NAME( numpy$core ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.core._internal", MOD_INIT_NAME( numpy$core$_internal ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core._methods", MOD_INIT_NAME( numpy$core$_methods ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.arrayprint", MOD_INIT_NAME( numpy$core$arrayprint ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.defchararray", MOD_INIT_NAME( numpy$core$defchararray ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.einsumfunc", MOD_INIT_NAME( numpy$core$einsumfunc ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.fromnumeric", MOD_INIT_NAME( numpy$core$fromnumeric ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.function_base", MOD_INIT_NAME( numpy$core$function_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.getlimits", MOD_INIT_NAME( numpy$core$getlimits ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.info", MOD_INIT_NAME( numpy$core$info ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.machar", MOD_INIT_NAME( numpy$core$machar ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.memmap", MOD_INIT_NAME( numpy$core$memmap ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.multiarray", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"numpy.core.numeric", MOD_INIT_NAME( numpy$core$numeric ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.numerictypes", MOD_INIT_NAME( numpy$core$numerictypes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.records", MOD_INIT_NAME( numpy$core$records ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.shape_base", MOD_INIT_NAME( numpy$core$shape_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.umath", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"numpy.ctypeslib", MOD_INIT_NAME( numpy$ctypeslib ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils", NULL, 1707085, 581, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.distutils.__config__", NULL, 1707666, 1063, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.__version__", NULL, 1708729, 332, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.ccompiler", NULL, 1709061, 20086, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command", NULL, 1729147, 1094, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.distutils.command.autodist", NULL, 1730241, 2215, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.bdist_rpm", NULL, 1732456, 899, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.build", NULL, 1733355, 1896, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.build_clib", NULL, 1735251, 6924, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.build_ext", NULL, 1742175, 11010, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.build_py", NULL, 1753185, 1415, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.build_scripts", NULL, 1754600, 1726, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.build_src", NULL, 1756326, 18548, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.config", NULL, 1774874, 12233, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.config_compiler", NULL, 1787107, 4228, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.develop", NULL, 1791335, 922, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.egg_info", NULL, 1792257, 1152, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.install", NULL, 1793409, 2121, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.install_clib", NULL, 1795530, 1669, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.install_data", NULL, 1797199, 966, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.install_headers", NULL, 1798165, 1020, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.sdist", NULL, 1799185, 1010, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.compat", NULL, 1800195, 467, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.conv_template", NULL, 1800662, 8154, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.core", NULL, 1808816, 4760, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.cpuinfo", NULL, 1813576, 33624, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.environment", NULL, 1847200, 2699, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.exec_command", NULL, 1849899, 7934, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.extension", NULL, 1857833, 2093, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.fcompiler", NULL, 1859926, 27268, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.distutils.from_template", NULL, 1887194, 6973, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.info", NULL, 1894167, 323, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.lib2def", NULL, 1894490, 3293, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.log", NULL, 1897783, 2457, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.mingw32ccompiler", NULL, 1900240, 14372, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.misc_util", NULL, 1914612, 66845, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.npy_pkg_config", NULL, 1981457, 12494, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.numpy_distribution", NULL, 1993951, 837, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.system_info", NULL, 1994788, 67428, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.unixccompiler", NULL, 2062216, 3368, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.dual", MOD_INIT_NAME( numpy$dual ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py", NULL, 2065584, 2054, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.f2py.__version__", NULL, 2067638, 403, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.auxfuncs", NULL, 2068041, 22302, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.capi_maps", NULL, 2090343, 17989, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.cb_rules", NULL, 2108332, 14788, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.cfuncs", NULL, 2123120, 35990, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.common_rules", NULL, 2159110, 4706, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.crackfortran", NULL, 2163816, 75976, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.diagnose", NULL, 2239792, 3759, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.f2py2e", NULL, 2243551, 19287, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.f2py_testing", NULL, 2262838, 1468, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.f90mod_rules", NULL, 2264306, 7388, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.func2subr", NULL, 2271694, 6757, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.rules", NULL, 2278451, 34214, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.use_rules", NULL, 2312665, 3103, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.fft", MOD_INIT_NAME( numpy$fft ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.fft.fftpack", MOD_INIT_NAME( numpy$fft$fftpack ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.fft.fftpack_lite", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"numpy.fft.helper", MOD_INIT_NAME( numpy$fft$helper ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.fft.info", MOD_INIT_NAME( numpy$fft$info ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib", MOD_INIT_NAME( numpy$lib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.lib._datasource", MOD_INIT_NAME( numpy$lib$_datasource ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib._iotools", MOD_INIT_NAME( numpy$lib$_iotools ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib._version", MOD_INIT_NAME( numpy$lib$_version ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.arraypad", MOD_INIT_NAME( numpy$lib$arraypad ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.arraysetops", MOD_INIT_NAME( numpy$lib$arraysetops ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.arrayterator", MOD_INIT_NAME( numpy$lib$arrayterator ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.financial", MOD_INIT_NAME( numpy$lib$financial ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.format", MOD_INIT_NAME( numpy$lib$format ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.function_base", MOD_INIT_NAME( numpy$lib$function_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.index_tricks", MOD_INIT_NAME( numpy$lib$index_tricks ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.info", MOD_INIT_NAME( numpy$lib$info ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.mixins", MOD_INIT_NAME( numpy$lib$mixins ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.nanfunctions", MOD_INIT_NAME( numpy$lib$nanfunctions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.npyio", MOD_INIT_NAME( numpy$lib$npyio ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.polynomial", MOD_INIT_NAME( numpy$lib$polynomial ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.scimath", MOD_INIT_NAME( numpy$lib$scimath ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.shape_base", MOD_INIT_NAME( numpy$lib$shape_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.stride_tricks", MOD_INIT_NAME( numpy$lib$stride_tricks ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.twodim_base", MOD_INIT_NAME( numpy$lib$twodim_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.type_check", MOD_INIT_NAME( numpy$lib$type_check ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.ufunclike", MOD_INIT_NAME( numpy$lib$ufunclike ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.utils", MOD_INIT_NAME( numpy$lib$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.linalg", MOD_INIT_NAME( numpy$linalg ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.linalg._umath_linalg", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"numpy.linalg.info", MOD_INIT_NAME( numpy$linalg$info ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.linalg.lapack_lite", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"numpy.linalg.linalg", MOD_INIT_NAME( numpy$linalg$linalg ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.ma", MOD_INIT_NAME( numpy$ma ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.ma.core", MOD_INIT_NAME( numpy$ma$core ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.ma.extras", MOD_INIT_NAME( numpy$ma$extras ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.ma.mrecords", MOD_INIT_NAME( numpy$ma$mrecords ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.matrixlib", MOD_INIT_NAME( numpy$matrixlib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.matrixlib.defmatrix", MOD_INIT_NAME( numpy$matrixlib$defmatrix ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial", MOD_INIT_NAME( numpy$polynomial ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.polynomial._polybase", MOD_INIT_NAME( numpy$polynomial$_polybase ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.chebyshev", MOD_INIT_NAME( numpy$polynomial$chebyshev ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.hermite", MOD_INIT_NAME( numpy$polynomial$hermite ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.hermite_e", MOD_INIT_NAME( numpy$polynomial$hermite_e ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.laguerre", MOD_INIT_NAME( numpy$polynomial$laguerre ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.legendre", MOD_INIT_NAME( numpy$polynomial$legendre ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.polynomial", MOD_INIT_NAME( numpy$polynomial$polynomial ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.polyutils", MOD_INIT_NAME( numpy$polynomial$polyutils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.random", MOD_INIT_NAME( numpy$random ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.random.info", MOD_INIT_NAME( numpy$random$info ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.random.mtrand", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"numpy.testing", NULL, 2315768, 673, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.testing.decorators", NULL, 2316441, 8301, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.testing.noseclasses", NULL, 2324742, 8981, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.testing.nosetester", NULL, 2333723, 14524, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.testing.utils", NULL, 2348247, 63338, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.version", MOD_INIT_NAME( numpy$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"packaging", MOD_INIT_NAME( packaging ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"packaging.__about__", MOD_INIT_NAME( packaging$__about__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pkg_resources", NULL, 2411585, 96566, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"pkg_resources.extern", NULL, 2508151, 2368, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"pkg_resources.py31compat", NULL, 2510519, 640, NUITKA_BYTECODE_FLAG },
    { (char *)"pycparser", MOD_INIT_NAME( pycparser ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pycparser.ast_transforms", MOD_INIT_NAME( pycparser$ast_transforms ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pycparser.c_ast", MOD_INIT_NAME( pycparser$c_ast ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pycparser.c_lexer", MOD_INIT_NAME( pycparser$c_lexer ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pycparser.c_parser", MOD_INIT_NAME( pycparser$c_parser ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pycparser.ply", MOD_INIT_NAME( pycparser$ply ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pycparser.ply.lex", MOD_INIT_NAME( pycparser$ply$lex ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pycparser.ply.yacc", MOD_INIT_NAME( pycparser$ply$yacc ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pycparser.plyparser", MOD_INIT_NAME( pycparser$plyparser ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyexpat", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"readline", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"scipy", MOD_INIT_NAME( scipy ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"scipy.__config__", MOD_INIT_NAME( scipy$__config__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"scipy._lib", MOD_INIT_NAME( scipy$_lib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"scipy._lib._ccallback", MOD_INIT_NAME( scipy$_lib$_ccallback ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"scipy._lib._ccallback_c", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"scipy._lib._version", MOD_INIT_NAME( scipy$_lib$_version ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"scipy._lib.six", MOD_INIT_NAME( scipy$_lib$six ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"scipy.version", MOD_INIT_NAME( scipy$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"select", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"setuptools", NULL, 2511159, 5617, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"setuptools.archive_util", NULL, 2516776, 5102, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command", NULL, 2521878, 670, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"setuptools.command.bdist_egg", NULL, 2522548, 13887, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.bdist_rpm", NULL, 2536435, 1721, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.develop", NULL, 2538156, 6369, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.easy_install", NULL, 2544525, 64232, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.egg_info", NULL, 2608757, 21007, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.install", NULL, 2629764, 3918, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.install_scripts", NULL, 2633682, 2223, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.py36compat", NULL, 2635905, 4568, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.sdist", NULL, 2640473, 6360, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.setopt", NULL, 2646833, 4547, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.config", NULL, 2651380, 14285, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.depends", NULL, 2665665, 5225, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.dist", NULL, 2670890, 35526, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.extension", NULL, 2706416, 1919, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.extern", NULL, 2708335, 277, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"setuptools.glob", NULL, 2708612, 3787, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.monkey", NULL, 2712399, 5125, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.namespaces", NULL, 2717524, 3622, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.package_index", NULL, 2721146, 32419, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.py26compat", NULL, 2753565, 1007, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.py27compat", NULL, 2754572, 755, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.py31compat", NULL, 2755327, 1837, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.py33compat", NULL, 2757164, 1172, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.py36compat", NULL, 2758336, 2151, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.sandbox", NULL, 2760487, 15854, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.ssl_support", NULL, 2776341, 6619, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.unicode_utils", NULL, 2782960, 1113, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.version", NULL, 2784073, 272, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.windows_support", NULL, 2784345, 955, NUITKA_BYTECODE_FLAG },
    { (char *)"six", MOD_INIT_NAME( six ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"smarkov", MOD_INIT_NAME( smarkov ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"smarkov.markov", MOD_INIT_NAME( smarkov$markov ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"smarkov.utils", MOD_INIT_NAME( smarkov$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"termcolor", MOD_INIT_NAME( termcolor ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"termios", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"tinydb", MOD_INIT_NAME( tinydb ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"tinydb.database", MOD_INIT_NAME( tinydb$database ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tinydb.queries", MOD_INIT_NAME( tinydb$queries ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tinydb.storages", MOD_INIT_NAME( tinydb$storages ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tinydb.utils", MOD_INIT_NAME( tinydb$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tinydb.version", MOD_INIT_NAME( tinydb$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ujson", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"zlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"__future__", NULL, 2785300, 4155, NUITKA_BYTECODE_FLAG },
    { (char *)"_compat_pickle", NULL, 2789455, 6554, NUITKA_BYTECODE_FLAG },
    { (char *)"_dummy_thread", NULL, 2796009, 4839, NUITKA_BYTECODE_FLAG },
    { (char *)"_markupbase", NULL, 2800848, 7979, NUITKA_BYTECODE_FLAG },
    { (char *)"_osx_support", NULL, 2808827, 9672, NUITKA_BYTECODE_FLAG },
    { (char *)"_pyio", NULL, 2818499, 71352, NUITKA_BYTECODE_FLAG },
    { (char *)"_sitebuiltins", NULL, 2889851, 3423, NUITKA_BYTECODE_FLAG },
    { (char *)"_strptime", NULL, 2893274, 15951, NUITKA_BYTECODE_FLAG },
    { (char *)"_sysconfigdata_m_linux_x86_64-linux-gnu", NULL, 2909225, 17441, NUITKA_BYTECODE_FLAG },
    { (char *)"_threading_local", NULL, 2926666, 6609, NUITKA_BYTECODE_FLAG },
    { (char *)"aifc", NULL, 2933275, 25923, NUITKA_BYTECODE_FLAG },
    { (char *)"argparse", NULL, 2959198, 60162, NUITKA_BYTECODE_FLAG },
    { (char *)"asynchat", NULL, 3019360, 6803, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio", NULL, 3026163, 766, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"asyncio.base_events", NULL, 3026929, 38482, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.base_futures", NULL, 3065411, 2035, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.base_subprocess", NULL, 3067446, 9250, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.base_tasks", NULL, 3076696, 1849, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.compat", NULL, 3078545, 720, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.constants", NULL, 3079265, 209, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.coroutines", NULL, 3079474, 8341, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.events", NULL, 3087815, 24891, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.futures", NULL, 3112706, 13759, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.locks", NULL, 3126465, 15352, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.log", NULL, 3141817, 206, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.proactor_events", NULL, 3142023, 16604, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.protocols", NULL, 3158627, 5965, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.queues", NULL, 3164592, 8333, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.selector_events", NULL, 3172925, 29809, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.sslproto", NULL, 3202734, 20324, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.streams", NULL, 3223058, 19586, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.subprocess", NULL, 3242644, 6812, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.tasks", NULL, 3249456, 19001, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.test_utils", NULL, 3268457, 16825, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.transports", NULL, 3285282, 12048, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.unix_events", NULL, 3297330, 30334, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncore", NULL, 3327664, 15815, NUITKA_BYTECODE_FLAG },
    { (char *)"bdb", NULL, 3343479, 16924, NUITKA_BYTECODE_FLAG },
    { (char *)"binhex", NULL, 3360403, 12074, NUITKA_BYTECODE_FLAG },
    { (char *)"bisect", NULL, 3372477, 2664, NUITKA_BYTECODE_FLAG },
    { (char *)"cProfile", NULL, 3375141, 4199, NUITKA_BYTECODE_FLAG },
    { (char *)"calendar", NULL, 3379340, 25870, NUITKA_BYTECODE_FLAG },
    { (char *)"cgi", NULL, 3405210, 27802, NUITKA_BYTECODE_FLAG },
    { (char *)"cgitb", NULL, 3433012, 10086, NUITKA_BYTECODE_FLAG },
    { (char *)"chunk", NULL, 3443098, 4888, NUITKA_BYTECODE_FLAG },
    { (char *)"cmd", NULL, 3447986, 12563, NUITKA_BYTECODE_FLAG },
    { (char *)"code", NULL, 3460549, 9824, NUITKA_BYTECODE_FLAG },
    { (char *)"codeop", NULL, 3470373, 6258, NUITKA_BYTECODE_FLAG },
    { (char *)"colorsys", NULL, 3476631, 3299, NUITKA_BYTECODE_FLAG },
    { (char *)"compileall", NULL, 3479930, 8246, NUITKA_BYTECODE_FLAG },
    { (char *)"concurrent", NULL, 3488176, 112, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"concurrent.futures", NULL, 3488288, 628, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"concurrent.futures._base", NULL, 3488916, 19840, NUITKA_BYTECODE_FLAG },
    { (char *)"concurrent.futures.process", NULL, 3508756, 15457, NUITKA_BYTECODE_FLAG },
    { (char *)"concurrent.futures.thread", NULL, 3524213, 3785, NUITKA_BYTECODE_FLAG },
    { (char *)"configparser", NULL, 3527998, 45214, NUITKA_BYTECODE_FLAG },
    { (char *)"contextlib", NULL, 3573212, 11146, NUITKA_BYTECODE_FLAG },
    { (char *)"copy", NULL, 3584358, 7067, NUITKA_BYTECODE_FLAG },
    { (char *)"crypt", NULL, 3591425, 2230, NUITKA_BYTECODE_FLAG },
    { (char *)"csv", NULL, 3593655, 11844, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes", NULL, 3605499, 16048, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"ctypes._endian", NULL, 3621547, 1912, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes.macholib", NULL, 3623459, 279, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"ctypes.macholib.dyld", NULL, 3623738, 4319, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes.macholib.dylib", NULL, 3628057, 1906, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes.macholib.framework", NULL, 3629963, 2186, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes.util", NULL, 3632149, 7214, NUITKA_BYTECODE_FLAG },
    { (char *)"curses", NULL, 3639363, 1771, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"curses.ascii", NULL, 3641134, 3909, NUITKA_BYTECODE_FLAG },
    { (char *)"curses.has_key", NULL, 3645043, 4233, NUITKA_BYTECODE_FLAG },
    { (char *)"curses.panel", NULL, 3649276, 203, NUITKA_BYTECODE_FLAG },
    { (char *)"curses.textpad", NULL, 3649479, 5896, NUITKA_BYTECODE_FLAG },
    { (char *)"datetime", NULL, 3655375, 53722, NUITKA_BYTECODE_FLAG },
    { (char *)"dbm", NULL, 3709097, 4157, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"dbm.dumb", NULL, 3713254, 8201, NUITKA_BYTECODE_FLAG },
    { (char *)"dbm.gnu", NULL, 3721455, 183, NUITKA_BYTECODE_FLAG },
    { (char *)"dbm.ndbm", NULL, 3721638, 182, NUITKA_BYTECODE_FLAG },
    { (char *)"decimal", NULL, 3721820, 163390, NUITKA_BYTECODE_FLAG },
    { (char *)"difflib", NULL, 3885210, 59508, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils", NULL, 3944718, 364, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"distutils.archive_util", NULL, 3945082, 6359, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.bcppcompiler", NULL, 3951441, 6467, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.ccompiler", NULL, 3957908, 33333, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.cmd", NULL, 3991241, 14974, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command", NULL, 4006215, 521, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"distutils.command.bdist", NULL, 4006736, 3767, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.bdist_dumb", NULL, 4010503, 3639, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.bdist_rpm", NULL, 4014142, 13055, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.bdist_wininst", NULL, 4027197, 8193, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build", NULL, 4035390, 3959, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build_clib", NULL, 4039349, 4957, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build_ext", NULL, 4044306, 16429, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build_py", NULL, 4060735, 10450, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build_scripts", NULL, 4071185, 4320, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.check", NULL, 4075505, 4865, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.clean", NULL, 4080370, 2165, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.config", NULL, 4082535, 10300, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install", NULL, 4092835, 13764, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_data", NULL, 4106599, 2310, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_egg_info", NULL, 4108909, 2971, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_headers", NULL, 4111880, 1710, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_lib", NULL, 4113590, 5162, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_scripts", NULL, 4118752, 2176, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.register", NULL, 4120928, 8398, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.sdist", NULL, 4129326, 12961, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.upload", NULL, 4142287, 5058, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.config", NULL, 4147345, 3473, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.core", NULL, 4150818, 6789, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.cygwinccompiler", NULL, 4157607, 8494, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.debug", NULL, 4166101, 174, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.dep_util", NULL, 4166275, 2690, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.dir_util", NULL, 4168965, 5790, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.dist", NULL, 4174755, 34126, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.errors", NULL, 4208881, 5460, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.extension", NULL, 4214341, 6936, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.fancy_getopt", NULL, 4221277, 10639, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.file_util", NULL, 4231916, 5883, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.filelist", NULL, 4237799, 9851, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.log", NULL, 4247650, 2247, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.msvccompiler", NULL, 4249897, 14554, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.spawn", NULL, 4264451, 4959, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.sysconfig", NULL, 4269410, 11865, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.text_file", NULL, 4281275, 8444, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.unixccompiler", NULL, 4289719, 6516, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.util", NULL, 4296235, 15519, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.version", NULL, 4311754, 7340, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.versionpredicate", NULL, 4319094, 5069, NUITKA_BYTECODE_FLAG },
    { (char *)"doctest", NULL, 4324163, 75577, NUITKA_BYTECODE_FLAG },
    { (char *)"dummy_threading", NULL, 4399740, 1090, NUITKA_BYTECODE_FLAG },
    { (char *)"email", NULL, 4400830, 1657, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"email._encoded_words", NULL, 4402487, 5632, NUITKA_BYTECODE_FLAG },
    { (char *)"email._header_value_parser", NULL, 4408119, 79766, NUITKA_BYTECODE_FLAG },
    { (char *)"email._parseaddr", NULL, 4487885, 12428, NUITKA_BYTECODE_FLAG },
    { (char *)"email._policybase", NULL, 4500313, 14816, NUITKA_BYTECODE_FLAG },
    { (char *)"email.base64mime", NULL, 4515129, 3206, NUITKA_BYTECODE_FLAG },
    { (char *)"email.charset", NULL, 4518335, 11499, NUITKA_BYTECODE_FLAG },
    { (char *)"email.contentmanager", NULL, 4529834, 7276, NUITKA_BYTECODE_FLAG },
    { (char *)"email.encoders", NULL, 4537110, 1628, NUITKA_BYTECODE_FLAG },
    { (char *)"email.errors", NULL, 4538738, 5945, NUITKA_BYTECODE_FLAG },
    { (char *)"email.feedparser", NULL, 4544683, 10632, NUITKA_BYTECODE_FLAG },
    { (char *)"email.generator", NULL, 4555315, 12501, NUITKA_BYTECODE_FLAG },
    { (char *)"email.header", NULL, 4567816, 16468, NUITKA_BYTECODE_FLAG },
    { (char *)"email.headerregistry", NULL, 4584284, 21235, NUITKA_BYTECODE_FLAG },
    { (char *)"email.iterators", NULL, 4605519, 1898, NUITKA_BYTECODE_FLAG },
    { (char *)"email.message", NULL, 4607417, 37980, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime", NULL, 4645397, 112, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"email.mime.application", NULL, 4645509, 1423, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.audio", NULL, 4646932, 2582, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.base", NULL, 4649514, 1048, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.image", NULL, 4650562, 1868, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.message", NULL, 4652430, 1297, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.multipart", NULL, 4653727, 1519, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.nonmultipart", NULL, 4655246, 734, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.text", NULL, 4655980, 1281, NUITKA_BYTECODE_FLAG },
    { (char *)"email.parser", NULL, 4657261, 5713, NUITKA_BYTECODE_FLAG },
    { (char *)"email.policy", NULL, 4662974, 9606, NUITKA_BYTECODE_FLAG },
    { (char *)"email.quoprimime", NULL, 4672580, 7668, NUITKA_BYTECODE_FLAG },
    { (char *)"email.utils", NULL, 4680248, 9663, NUITKA_BYTECODE_FLAG },
    { (char *)"filecmp", NULL, 4689911, 8293, NUITKA_BYTECODE_FLAG },
    { (char *)"fileinput", NULL, 4698204, 13140, NUITKA_BYTECODE_FLAG },
    { (char *)"fnmatch", NULL, 4711344, 2862, NUITKA_BYTECODE_FLAG },
    { (char *)"formatter", NULL, 4714206, 17567, NUITKA_BYTECODE_FLAG },
    { (char *)"fractions", NULL, 4731773, 18414, NUITKA_BYTECODE_FLAG },
    { (char *)"ftplib", NULL, 4750187, 28091, NUITKA_BYTECODE_FLAG },
    { (char *)"getopt", NULL, 4778278, 6205, NUITKA_BYTECODE_FLAG },
    { (char *)"getpass", NULL, 4784483, 4165, NUITKA_BYTECODE_FLAG },
    { (char *)"gettext", NULL, 4788648, 13990, NUITKA_BYTECODE_FLAG },
    { (char *)"glob", NULL, 4802638, 4247, NUITKA_BYTECODE_FLAG },
    { (char *)"gzip", NULL, 4806885, 16214, NUITKA_BYTECODE_FLAG },
    { (char *)"hashlib", NULL, 4823099, 6624, NUITKA_BYTECODE_FLAG },
    { (char *)"hmac", NULL, 4829723, 4824, NUITKA_BYTECODE_FLAG },
    { (char *)"html", NULL, 4834547, 3365, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"html.entities", NULL, 4837912, 50435, NUITKA_BYTECODE_FLAG },
    { (char *)"html.parser", NULL, 4888347, 11152, NUITKA_BYTECODE_FLAG },
    { (char *)"http", NULL, 4899499, 6515, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"http.client", NULL, 4906014, 34327, NUITKA_BYTECODE_FLAG },
    { (char *)"http.cookiejar", NULL, 4940341, 53893, NUITKA_BYTECODE_FLAG },
    { (char *)"http.cookies", NULL, 4994234, 16076, NUITKA_BYTECODE_FLAG },
    { (char *)"http.server", NULL, 5010310, 32206, NUITKA_BYTECODE_FLAG },
    { (char *)"imaplib", NULL, 5042516, 42087, NUITKA_BYTECODE_FLAG },
    { (char *)"imghdr", NULL, 5084603, 4138, NUITKA_BYTECODE_FLAG },
    { (char *)"imp", NULL, 5088741, 9667, NUITKA_BYTECODE_FLAG },
    { (char *)"importlib.abc", NULL, 5098408, 11281, NUITKA_BYTECODE_FLAG },
    { (char *)"importlib.util", NULL, 5109689, 8888, NUITKA_BYTECODE_FLAG },
    { (char *)"ipaddress", NULL, 5118577, 62649, NUITKA_BYTECODE_FLAG },
    { (char *)"json", NULL, 5181226, 12627, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"json.decoder", NULL, 5193853, 9943, NUITKA_BYTECODE_FLAG },
    { (char *)"json.encoder", NULL, 5203796, 11245, NUITKA_BYTECODE_FLAG },
    { (char *)"json.scanner", NULL, 5215041, 1958, NUITKA_BYTECODE_FLAG },
    { (char *)"json.tool", NULL, 5216999, 1533, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3", NULL, 5218532, 109, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"lib2to3.btm_matcher", NULL, 5218641, 4920, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.btm_utils", NULL, 5223561, 6119, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixer_base", NULL, 5229680, 6211, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixer_util", NULL, 5235891, 12024, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes", NULL, 5247915, 115, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"lib2to3.fixes.fix_apply", NULL, 5248030, 1663, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_asserts", NULL, 5249693, 1238, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_basestring", NULL, 5250931, 628, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_buffer", NULL, 5251559, 773, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_dict", NULL, 5252332, 3296, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_except", NULL, 5255628, 2783, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_exec", NULL, 5258411, 1114, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_execfile", NULL, 5259525, 1648, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_exitfunc", NULL, 5261173, 2261, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_filter", NULL, 5263434, 2326, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_funcattrs", NULL, 5265760, 939, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_future", NULL, 5266699, 749, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_getcwdu", NULL, 5267448, 753, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_has_key", NULL, 5268201, 2883, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_idioms", NULL, 5271084, 3868, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_import", NULL, 5274952, 2755, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_imports", NULL, 5277707, 4314, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_imports2", NULL, 5282021, 513, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_input", NULL, 5282534, 915, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_intern", NULL, 5283449, 1127, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_isinstance", NULL, 5284576, 1525, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_itertools", NULL, 5286101, 1519, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_itertools_imports", NULL, 5287620, 1574, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_long", NULL, 5289194, 670, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_map", NULL, 5289864, 3058, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_metaclass", NULL, 5292922, 5341, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_methodattrs", NULL, 5298263, 901, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_ne", NULL, 5299164, 772, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_next", NULL, 5299936, 3025, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_nonzero", NULL, 5302961, 888, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_numliterals", NULL, 5303849, 994, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_operator", NULL, 5304843, 4202, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_paren", NULL, 5309045, 1355, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_print", NULL, 5310400, 2295, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_raise", NULL, 5312695, 2214, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_raw_input", NULL, 5314909, 760, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_reduce", NULL, 5315669, 1095, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_reload", NULL, 5316764, 1127, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_renames", NULL, 5317891, 1958, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_repr", NULL, 5319849, 810, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_set_literal", NULL, 5320659, 1652, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_standarderror", NULL, 5322311, 685, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_sys_exc", NULL, 5322996, 1366, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_throw", NULL, 5324362, 1767, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_tuple_params", NULL, 5326129, 4561, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_types", NULL, 5330690, 1794, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_unicode", NULL, 5332484, 1508, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_urllib", NULL, 5333992, 5953, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_ws_comma", NULL, 5339945, 1088, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_xrange", NULL, 5341033, 2503, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_xreadlines", NULL, 5343536, 1082, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_zip", NULL, 5344618, 1546, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.main", NULL, 5346164, 8512, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.patcomp", NULL, 5354676, 5642, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2", NULL, 5360318, 145, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"lib2to3.pgen2.driver", NULL, 5360463, 4314, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.grammar", NULL, 5364777, 6842, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.literals", NULL, 5371619, 1520, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.parse", NULL, 5373139, 6315, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.pgen", NULL, 5379454, 9771, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.token", NULL, 5389225, 1838, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.tokenize", NULL, 5391063, 15372, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pygram", NULL, 5406435, 1142, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pytree", NULL, 5407577, 25122, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.refactor", NULL, 5432699, 20777, NUITKA_BYTECODE_FLAG },
    { (char *)"logging", NULL, 5453476, 59586, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"logging.config", NULL, 5513062, 23206, NUITKA_BYTECODE_FLAG },
    { (char *)"logging.handlers", NULL, 5536268, 43260, NUITKA_BYTECODE_FLAG },
    { (char *)"lzma", NULL, 5579528, 11980, NUITKA_BYTECODE_FLAG },
    { (char *)"macpath", NULL, 5591508, 5629, NUITKA_BYTECODE_FLAG },
    { (char *)"macurl2path", NULL, 5597137, 1855, NUITKA_BYTECODE_FLAG },
    { (char *)"mailbox", NULL, 5598992, 63740, NUITKA_BYTECODE_FLAG },
    { (char *)"mailcap", NULL, 5662732, 6466, NUITKA_BYTECODE_FLAG },
    { (char *)"mimetypes", NULL, 5669198, 15502, NUITKA_BYTECODE_FLAG },
    { (char *)"modulefinder", NULL, 5684700, 15354, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing", NULL, 5700054, 493, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"multiprocessing.connection", NULL, 5700547, 24769, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.context", NULL, 5725316, 13084, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.dummy", NULL, 5738400, 3703, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"multiprocessing.dummy.connection", NULL, 5742103, 2483, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.forkserver", NULL, 5744586, 6638, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.heap", NULL, 5751224, 6065, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.managers", NULL, 5757289, 33289, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.pool", NULL, 5790578, 20809, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.popen_fork", NULL, 5811387, 2135, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.popen_forkserver", NULL, 5813522, 2314, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.popen_spawn_posix", NULL, 5815836, 2094, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.process", NULL, 5817930, 8073, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.queues", NULL, 5826003, 9001, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.reduction", NULL, 5835004, 7938, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.resource_sharer", NULL, 5842942, 5142, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.semaphore_tracker", NULL, 5848084, 3426, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.sharedctypes", NULL, 5851510, 6862, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.spawn", NULL, 5858372, 6429, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.synchronize", NULL, 5864801, 11205, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.util", NULL, 5876006, 9548, NUITKA_BYTECODE_FLAG },
    { (char *)"netrc", NULL, 5885554, 3838, NUITKA_BYTECODE_FLAG },
    { (char *)"nntplib", NULL, 5889392, 33768, NUITKA_BYTECODE_FLAG },
    { (char *)"ntpath", NULL, 5923160, 13653, NUITKA_BYTECODE_FLAG },
    { (char *)"nturl2path", NULL, 5936813, 1487, NUITKA_BYTECODE_FLAG },
    { (char *)"numbers", NULL, 5938300, 12130, NUITKA_BYTECODE_FLAG },
    { (char *)"optparse", NULL, 5950430, 48042, NUITKA_BYTECODE_FLAG },
    { (char *)"pathlib", NULL, 5998472, 40731, NUITKA_BYTECODE_FLAG },
    { (char *)"pdb", NULL, 6039203, 46082, NUITKA_BYTECODE_FLAG },
    { (char *)"pickle", NULL, 6085285, 42679, NUITKA_BYTECODE_FLAG },
    { (char *)"pickletools", NULL, 6127964, 66034, NUITKA_BYTECODE_FLAG },
    { (char *)"pipes", NULL, 6193998, 7796, NUITKA_BYTECODE_FLAG },
    { (char *)"pkgutil", NULL, 6201794, 16249, NUITKA_BYTECODE_FLAG },
    { (char *)"platform", NULL, 6218043, 27972, NUITKA_BYTECODE_FLAG },
    { (char *)"plistlib", NULL, 6246015, 27352, NUITKA_BYTECODE_FLAG },
    { (char *)"poplib", NULL, 6273367, 13315, NUITKA_BYTECODE_FLAG },
    { (char *)"pprint", NULL, 6286682, 15812, NUITKA_BYTECODE_FLAG },
    { (char *)"profile", NULL, 6302494, 13889, NUITKA_BYTECODE_FLAG },
    { (char *)"pstats", NULL, 6316383, 21845, NUITKA_BYTECODE_FLAG },
    { (char *)"pty", NULL, 6338228, 3849, NUITKA_BYTECODE_FLAG },
    { (char *)"py_compile", NULL, 6342077, 6532, NUITKA_BYTECODE_FLAG },
    { (char *)"pyclbr", NULL, 6348609, 8353, NUITKA_BYTECODE_FLAG },
    { (char *)"pydoc", NULL, 6356962, 83899, NUITKA_BYTECODE_FLAG },
    { (char *)"pydoc_data", NULL, 6440861, 112, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"pydoc_data.topics", NULL, 6440973, 396851, NUITKA_BYTECODE_FLAG },
    { (char *)"queue", NULL, 6837824, 8743, NUITKA_BYTECODE_FLAG },
    { (char *)"random", NULL, 6846567, 19180, NUITKA_BYTECODE_FLAG },
    { (char *)"rlcompleter", NULL, 6865747, 5768, NUITKA_BYTECODE_FLAG },
    { (char *)"runpy", NULL, 6871515, 7921, NUITKA_BYTECODE_FLAG },
    { (char *)"sched", NULL, 6879436, 6552, NUITKA_BYTECODE_FLAG },
    { (char *)"secrets", NULL, 6885988, 2150, NUITKA_BYTECODE_FLAG },
    { (char *)"selectors", NULL, 6888138, 17685, NUITKA_BYTECODE_FLAG },
    { (char *)"shelve", NULL, 6905823, 9459, NUITKA_BYTECODE_FLAG },
    { (char *)"shlex", NULL, 6915282, 6958, NUITKA_BYTECODE_FLAG },
    { (char *)"shutil", NULL, 6922240, 30373, NUITKA_BYTECODE_FLAG },
    { (char *)"signal", NULL, 6952613, 2503, NUITKA_BYTECODE_FLAG },
    { (char *)"site", NULL, 6955116, 12413, NUITKA_BYTECODE_FLAG },
    { (char *)"smtpd", NULL, 6967529, 26671, NUITKA_BYTECODE_FLAG },
    { (char *)"smtplib", NULL, 6994200, 35284, NUITKA_BYTECODE_FLAG },
    { (char *)"sndhdr", NULL, 7029484, 6901, NUITKA_BYTECODE_FLAG },
    { (char *)"socket", NULL, 7036385, 21995, NUITKA_BYTECODE_FLAG },
    { (char *)"socketserver", NULL, 7058380, 23617, NUITKA_BYTECODE_FLAG },
    { (char *)"sqlite3", NULL, 7081997, 140, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"sqlite3.dbapi2", NULL, 7082137, 2459, NUITKA_BYTECODE_FLAG },
    { (char *)"sqlite3.dump", NULL, 7084596, 1902, NUITKA_BYTECODE_FLAG },
    { (char *)"ssl", NULL, 7086498, 35857, NUITKA_BYTECODE_FLAG },
    { (char *)"statistics", NULL, 7122355, 18162, NUITKA_BYTECODE_FLAG },
    { (char *)"string", NULL, 7140517, 7940, NUITKA_BYTECODE_FLAG },
    { (char *)"subprocess", NULL, 7148457, 35038, NUITKA_BYTECODE_FLAG },
    { (char *)"sunau", NULL, 7183495, 16926, NUITKA_BYTECODE_FLAG },
    { (char *)"symbol", NULL, 7200421, 2505, NUITKA_BYTECODE_FLAG },
    { (char *)"symtable", NULL, 7202926, 10416, NUITKA_BYTECODE_FLAG },
    { (char *)"sysconfig", NULL, 7213342, 15819, NUITKA_BYTECODE_FLAG },
    { (char *)"tabnanny", NULL, 7229161, 6963, NUITKA_BYTECODE_FLAG },
    { (char *)"tarfile", NULL, 7236124, 62573, NUITKA_BYTECODE_FLAG },
    { (char *)"telnetlib", NULL, 7298697, 18085, NUITKA_BYTECODE_FLAG },
    { (char *)"tempfile", NULL, 7316782, 22119, NUITKA_BYTECODE_FLAG },
    { (char *)"textwrap", NULL, 7338901, 13672, NUITKA_BYTECODE_FLAG },
    { (char *)"this", NULL, 7352573, 1253, NUITKA_BYTECODE_FLAG },
    { (char *)"timeit", NULL, 7353826, 11591, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter", NULL, 7365417, 179498, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"tkinter.colorchooser", NULL, 7544915, 1105, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.commondialog", NULL, 7546020, 1084, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.constants", NULL, 7547104, 1634, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.dialog", NULL, 7548738, 1429, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.dnd", NULL, 7550167, 11152, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.filedialog", NULL, 7561319, 12263, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.font", NULL, 7573582, 6148, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.messagebox", NULL, 7579730, 3018, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.scrolledtext", NULL, 7582748, 2145, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.simpledialog", NULL, 7584893, 10517, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.tix", NULL, 7595410, 83641, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.ttk", NULL, 7679051, 56800, NUITKA_BYTECODE_FLAG },
    { (char *)"trace", NULL, 7735851, 19567, NUITKA_BYTECODE_FLAG },
    { (char *)"tracemalloc", NULL, 7755418, 17217, NUITKA_BYTECODE_FLAG },
    { (char *)"tty", NULL, 7772635, 1060, NUITKA_BYTECODE_FLAG },
    { (char *)"turtle", NULL, 7773695, 131600, NUITKA_BYTECODE_FLAG },
    { (char *)"typing", NULL, 7905295, 73828, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest", NULL, 7979123, 2977, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"unittest.case", NULL, 7982100, 47592, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.loader", NULL, 8029692, 13854, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.main", NULL, 8043546, 7000, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.mock", NULL, 8050546, 61744, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.result", NULL, 8112290, 7214, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.runner", NULL, 8119504, 6844, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.signals", NULL, 8126348, 2160, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.suite", NULL, 8128508, 9159, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.util", NULL, 8137667, 4741, NUITKA_BYTECODE_FLAG },
    { (char *)"urllib", NULL, 8142408, 108, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"urllib.error", NULL, 8142516, 2742, NUITKA_BYTECODE_FLAG },
    { (char *)"urllib.parse", NULL, 8145258, 29377, NUITKA_BYTECODE_FLAG },
    { (char *)"urllib.request", NULL, 8174635, 72602, NUITKA_BYTECODE_FLAG },
    { (char *)"urllib.response", NULL, 8247237, 3215, NUITKA_BYTECODE_FLAG },
    { (char *)"urllib.robotparser", NULL, 8250452, 7022, NUITKA_BYTECODE_FLAG },
    { (char *)"uu", NULL, 8257474, 3486, NUITKA_BYTECODE_FLAG },
    { (char *)"uuid", NULL, 8260960, 20382, NUITKA_BYTECODE_FLAG },
    { (char *)"venv", NULL, 8281342, 13624, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"wave", NULL, 8294966, 17873, NUITKA_BYTECODE_FLAG },
    { (char *)"webbrowser", NULL, 8312839, 15836, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref", NULL, 8328675, 704, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"wsgiref.handlers", NULL, 8329379, 16136, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref.headers", NULL, 8345515, 7725, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref.simple_server", NULL, 8353240, 5181, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref.util", NULL, 8358421, 5180, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref.validate", NULL, 8363601, 14788, NUITKA_BYTECODE_FLAG },
    { (char *)"xdrlib", NULL, 8378389, 8290, NUITKA_BYTECODE_FLAG },
    { (char *)"xml", NULL, 8386679, 672, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.dom", NULL, 8387351, 5419, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.dom.NodeFilter", NULL, 8392770, 939, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.domreg", NULL, 8393709, 2747, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.expatbuilder", NULL, 8396456, 27132, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.minicompat", NULL, 8423588, 2777, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.minidom", NULL, 8426365, 55834, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.pulldom", NULL, 8482199, 10523, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.xmlbuilder", NULL, 8492722, 13539, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.etree", NULL, 8506261, 111, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.etree.ElementInclude", NULL, 8506372, 1547, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.etree.ElementPath", NULL, 8507919, 6123, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.etree.ElementTree", NULL, 8514042, 44716, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.etree.cElementTree", NULL, 8558758, 153, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.parsers", NULL, 8558911, 285, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.parsers.expat", NULL, 8559196, 314, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax", NULL, 8559510, 3109, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.sax._exceptions", NULL, 8562619, 5453, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax.expatreader", NULL, 8568072, 12386, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax.handler", NULL, 8580458, 12301, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax.saxutils", NULL, 8592759, 12795, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax.xmlreader", NULL, 8605554, 16910, NUITKA_BYTECODE_FLAG },
    { (char *)"xmlrpc", NULL, 8622464, 108, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xmlrpc.client", NULL, 8622572, 34651, NUITKA_BYTECODE_FLAG },
    { (char *)"xmlrpc.server", NULL, 8657223, 29474, NUITKA_BYTECODE_FLAG },
    { (char *)"zipapp", NULL, 8686697, 5522, NUITKA_BYTECODE_FLAG },
    { (char *)"zipfile", NULL, 8692219, 48192, NUITKA_BYTECODE_FLAG },
    { NULL, NULL, 0, 0, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}
