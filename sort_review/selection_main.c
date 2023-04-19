#include "sort.h"

int main()
{
	int array_size;
	int array[] = {7, 1, 8, 4, 2, 5, 9};
	
	array_size = sizeof(array) / sizeof(array[0]);
	selection_sort(array, array_size);
	print_array(array, array_size);
	return 0;
}