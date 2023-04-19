#include "sort.h"

void print_array(int array[], int len)
{
	int i;

	if (!array)
		return;

	for (i = 0; i < len; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

}