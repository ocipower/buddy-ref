#include "selections.h"

void *insertion_sort(int *array, int len)
{
		//		0  1  2  3  4
	// array = {2, 4, 7, 1, 5}
	int i, j, current;
	int value;

	for (i = 1; i < len; ++i)
	{
		current = array[i];
		j = i - 1;
		while(j >= 0 && array[j] > current)
		{
			array[j + 1] = array[j];
			j -= 1;
		}
		array[j + 1] = current;
		//array[j] = temp1;
	}
	return (array);
}


