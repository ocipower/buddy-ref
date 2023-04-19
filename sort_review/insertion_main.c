#include "sort.h"

int main()
{
	int array_size;
	int array[] = {7, 23, 2, 1, 8, 4, 2, 5, 9};
	
	array_size = sizeof(array) / sizeof(array[0]);
	insertion_sort(array, array_size);
	print_array(array, array_size);
	return 0;
}