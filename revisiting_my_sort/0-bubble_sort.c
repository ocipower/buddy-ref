#include "sorts.h"

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	for (i = 0; i < size - 1; ++i)
	{
		for (j = i  + 1; j < size; ++j)
		{
			if (array[j] < array[i])
			{
				swap(&array[j], &array[i]);
				print_array(array, size);
				printf("\n");
			}
		}
	}
}

int main()
{
	size_t array_size;
	int array[] = {7, 1, 8, 4, 2, 5, 9};
	
	array_size = sizeof(array) / sizeof(array[0]);

	//TEST BUBBLE_SORT
	bubble_sort(array, array_size);


	//PRINT_ARRAY TEST
	print_array(array, array_size);
	
	return 0;
}