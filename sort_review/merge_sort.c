#include "sort.h"

void merge_sort(int array[], int len)
{	
	merge_sort_recursion(array, 0, len - 1);
}