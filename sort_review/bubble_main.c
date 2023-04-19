#include "sort.h"

int main()
{
	int array_size;
	int array[] = {7, 1, 8, 4, 2, 5, 9};
	
	array_size = sizeof(array) / sizeof(array[0]);

	//TEST BUBBLE_SORT
	bubble_sort(array, array_size);

	
	//SWAP TEST
	/*swap(&array[0], &array[1]);*/
	
	
	//PRINT_ARRAY TEST
	print_array(array, array_size);
	
	return 0;
}