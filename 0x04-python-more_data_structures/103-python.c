#include <Python.h>

void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);

void print_python_list(PyObject *p)
{
    Py_ssize_t size, alloc;
    const char *type;

    PyListObject *list = (PyListObject *)p;
    PyVarObject *var = (PyVarObject *)p;

    size = var->ob_size;
    alloc = list->allocated;

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %zd\n", size);
    printf("[*] Allocated = %zd\n", alloc);

    for (Py_ssize_t i = 0; i < size; i++)
    {
        type = Py_TYPE(list->ob_item[i])->tp_name;
        printf("Element %zd: %s\n", i, type);

        if (strcmp(type, "bytes") == 0)
            print_python_bytes(list->ob_item[i]);
    }
}

void print_python_bytes(PyObject *p)
{
    unsigned char size;
    PyBytesObject *bytes = (PyBytesObject *)p;

    printf("[.] bytes object info\n");

    if (strcmp(p->ob_type->tp_name, "bytes") != 0)
    {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    printf("  size: %zd\n", Py_SIZE(p));
    printf("  trying string: %s\n", bytes->ob_sval);

    if (Py_SIZE(p) > 10)
        size = 10;
    else
        size = Py_SIZE(p) + 1;

    printf("  first %d bytes: ", size);
    for (unsigned char i = 0; i < size; i++)
    {
        printf("%02hhx", bytes->ob_sval[i]);

        if (i == (size - 1))
            printf("\n");
        else
            printf(" ");
    }
}
