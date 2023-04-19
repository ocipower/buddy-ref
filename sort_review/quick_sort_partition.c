#include "sort.h"

int quick_sort_partition(int array[], int l, int u)
{

	int pivot_idx, pivot, i, ran;

	pivot_idx = l +  (rand() % (u - l));
	if (pivot_idx != u)
		swap(&array[u], &array[pivot_idx]);

	pivot = array[u];
	pivot_idx = l;
	for (i = l; i < u; ++i)
	{
		if (array[i] < pivot)
		{
			//if (i == 0)
				//continue;
			swap(&array[i], &array[pivot_idx]);
			pivot_idx++;
		}
	}
	swap(&array[u], &array[pivot_idx]);
	
	return (pivot_idx);
}