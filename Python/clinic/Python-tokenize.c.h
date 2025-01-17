/*[clinic input]
preserve
[clinic start generated code]*/

#if defined(Py_BUILD_CORE) && !defined(Py_BUILD_CORE_MODULE)
#  include "pycore_gc.h"            // PyGC_Head
#  include "pycore_runtime.h"       // _Py_ID()
#endif


static PyObject *
tokenizeriter_new_impl(PyTypeObject *type, const char *source,
                       int extra_tokens);

static PyObject *
tokenizeriter_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
    PyObject *return_value = NULL;
    #if defined(Py_BUILD_CORE) && !defined(Py_BUILD_CORE_MODULE)

    #define NUM_KEYWORDS 2
    static struct {
        PyGC_Head _this_is_not_used;
        PyObject_VAR_HEAD
        PyObject *ob_item[NUM_KEYWORDS];
    } _kwtuple = {
        .ob_base = PyVarObject_HEAD_INIT(&PyTuple_Type, NUM_KEYWORDS)
        .ob_item = { &_Py_ID(source), &_Py_ID(extra_tokens), },
    };
    #undef NUM_KEYWORDS
    #define KWTUPLE (&_kwtuple.ob_base.ob_base)

    #else  // !Py_BUILD_CORE
    #  define KWTUPLE NULL
    #endif  // !Py_BUILD_CORE

    static const char * const _keywords[] = {"source", "extra_tokens", NULL};
    static _PyArg_Parser _parser = {
        .keywords = _keywords,
        .fname = "tokenizeriter",
        .kwtuple = KWTUPLE,
    };
    #undef KWTUPLE
    PyObject *argsbuf[2];
    PyObject * const *fastargs;
    Py_ssize_t nargs = PyTuple_GET_SIZE(args);
    const char *source;
    int extra_tokens;

    fastargs = _PyArg_UnpackKeywords(_PyTuple_CAST(args)->ob_item, nargs, kwargs, NULL, &_parser, 1, 1, 1, argsbuf);
    if (!fastargs) {
        goto exit;
    }
    if (!PyUnicode_Check(fastargs[0])) {
        _PyArg_BadArgument("tokenizeriter", "argument 'source'", "str", fastargs[0]);
        goto exit;
    }
    Py_ssize_t source_length;
    source = PyUnicode_AsUTF8AndSize(fastargs[0], &source_length);
    if (source == NULL) {
        goto exit;
    }
    if (strlen(source) != (size_t)source_length) {
        PyErr_SetString(PyExc_ValueError, "embedded null character");
        goto exit;
    }
    extra_tokens = PyObject_IsTrue(fastargs[1]);
    if (extra_tokens < 0) {
        goto exit;
    }
    return_value = tokenizeriter_new_impl(type, source, extra_tokens);

exit:
    return return_value;
}
/*[clinic end generated code: output=940b564c67f6e0e2 input=a9049054013a1b77]*/
