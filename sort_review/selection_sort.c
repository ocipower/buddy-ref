#include "sort.h"

void selection_sort(int array[], int len)
{
	int i, j, min_idx;

	if (!array)
		return;

	for (i = 0; i < len-1; ++i)
	{
		min_idx = i;

		for (j = i + 1; j < len; ++j)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}			
		}
		swap(&array[i], &array[min_idx]);
	}

}