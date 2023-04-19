#include "sort.h"

void bubble_sort(int array[], int len)
{
	int i, j;

	if (!array)
		return;
	 //{7, 1, 8, 4, 2, 5, 9};
	//{1, 7, 8, 4, 2, 5, 9};
	//{1, 4, 8, 7, 2, 5, 9};
	//{1, 4, 7, 8, 2, 5, 9};
	//{1, 4, 7, 2, 8, 5, 9};
	//{1, 4, 7, 2, 5, 8, 9};

	for (i = 0; i < len - 1; ++i)
	{
		for (j = i + 1; j < len; ++j)
		{
			if (array[j] < array[i])
			{
				swap(&array[i], &array[j]);
			}			
		}
	}

}
