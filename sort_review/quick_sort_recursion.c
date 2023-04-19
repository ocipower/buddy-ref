#include "sort.h"

void quick_sort_recursion(int array[], int l, int u)
{
	int p_idx;
	if (l < u)
	{
		p_idx = quick_sort_partition(array, l, u);
		quick_sort_recursion(array, l, p_idx - 1);
		quick_sort_recursion(array, p_idx + 1, u);
	}
}

