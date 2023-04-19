#include "sort.h"

int main()
{
	int *p;
	//int array_size;
	int array1[] = {1, 2, 2, 4}; 
	int array2[] = {5, 7, 8, 11, 23};
	int array[9];
	
	//array_size = sizeof(array) / sizeof(array[0]);
	p = merge(array1, array2, array, 4, 5);
	printf("\n");
	print_array(p, 9);
	return 0;
}