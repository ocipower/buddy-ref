#include "sort.h"

int main()
{
	//int *p;
	int array_size;
	int array[] ={7, 23, 2, 1, 8, 4, 2, 5, 9, 0, 14, 67, 3};
	
	
	array_size = sizeof(array) / sizeof(array[0]);
	merge_sort(array, array_size);
	printf("\n");
	print_array(array, array_size);
	return 0;
}