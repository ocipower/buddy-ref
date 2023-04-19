#include "sort.h"

void insertion_sort(int array[], int len)
{
	int i, j, key;

	//{7, 1, 8, 4, 2, 5, 9};
	// 0  1  2  3  4  5  6
	// j  i

	//{1, 7, 8, 4, 2, 5, 9};
	// 0  1  2  3  4  5  6
	//    j  i

	//{1, 7, 8, 4, 2, 5, 9};
	//{1, 4, 8, 7, 2, 5, 9};
	//{1, 4, 7, 8, 2, 5, 9};
	//{1, 4, 7, 2, 8, 5, 9};
	//{1, 4, 7, 2, 5, 8, 9};

	if (!array)
		return;
	
	for (i = 1; i < len; ++i)
	{
		key = array[i];
		j = i - 1;
		for (; j >= 0 && array[j] > key;)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
}