#include "sort.h"

int main()
{
	int array_size;
	int array[] = {7, 1, 8, 4, 2, 5, 9, 0, 6, 79};
	
	array_size = sizeof(array) / sizeof(array[0]);
	quick_sort(array, 0, array_size - 1);
	print_array(array, array_size);
	return 0;
}