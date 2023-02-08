#include <stdio.h>
#include "Python.h"

void print()
{
	printf("hello world!\n");
}

void Print_list(PyObject *list)
{
	int i;
	PyListObject *pl;
	pl = (PyListObject *)list;
	printf("hello Python!\n");
	printf("[*] allocated = %ld\n", pl->allocated);
	printf("[*] nu of items in variable part = %ld\n", pl->ob_base.ob_size);
	printf("[*] nu of items in variable part = %ld\n", pl->ob_base.ob_type->tp_name);

	for (int i = 0; i < pl->ob_base.ob_size; ++i)
	{
		printf("--Elements %d--\n", i);
		printf(" Elements = %d\n", pl->ob_item[i]->ob_type->ob_name);
	}
}
