#include "selections.h"

void print(int array[])
{
	int i;
	unsigned long len;
	len = sizeof(&array)/sizeof(array[0]);
	for (i = 0; i < 5; ++i)
	{
		printf("%d ", array[i]);
	}
}