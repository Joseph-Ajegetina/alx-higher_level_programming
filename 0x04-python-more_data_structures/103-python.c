#include <Python.h>
#include <stdio.h>

/**
 * print_python_list - Prints information about a Python list object
 * @p: A pointer to the PyObject representing the list object
 */
void print_python_list(PyObject *p)
{
	Py_ssize_t size, alloc, i;
	PyObject *item;

	size = PyList_Size(p);
	alloc = ((PyListObject *)p)->allocated;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %zd\n", size);
	printf("[*] Allocated = %zd\n", alloc);

	for (i = 0; i < size; i++)
	{
		item = PyList_GetItem(p, i);
		printf("Element %zd: %s\n", i, Py_TYPE(item)->tp_name);
	}
}

/**
 * print_python_bytes - Prints information about a Python bytes object
 * @p: A pointer to the PyObject representing the bytes object
 */
void print_python_bytes(PyObject *p)
{
	Py_ssize_t size, i;
	char *str;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	size = PyBytes_Size(p);
	str = PyBytes_AsString(p);

	printf("  size: %zd\n", size);
	printf("  trying string: %s\n", str);

	if (size > 10)
		size = 10;

	printf("  first %zd bytes: ", size);
	for (i = 0; i < size; i++)
	{
		printf("%02x", (unsigned char)str[i]);
		if (i == size - 1)
			printf("\n");
		else
			printf(" ");
	}
}

