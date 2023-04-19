#include "sort.h"

void merge_sort_recursion(int array[], int left, int right)
{
	int mid;

	// [7, 23, 2, 1, 8]
    //	    /        \
	// [7, 23, 2]  [1, 8]
	//	  /    \     /  \
	// [7, 23] [2]  [1] [8]   
	//  /  \
    // [7] [2]

	mid = left + (right - left) / 2;
	if (left < right)
	{
		merge_sort_recursion(array, left, mid);
		merge_sort_recursion(array, mid + 1, right);
		merge_sorted_array(array, left , mid, right);
	}
	
}