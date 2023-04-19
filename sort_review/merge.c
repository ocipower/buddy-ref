#include "sort.h"

int * merge(int a[], int b[], int array[], int left, int right)
{
	if (!a && !b)
		return NULL;
	
	int i, j, k; 

	i = j = k = 0;

	while (i < left && j < right)
		(a[i] < b[j])? (array[k++] = a[i++]) : (array[k++] = b[j++]);
	
	while (i < left)
		array[k++] = a[i++];

	while (j < right)
		array[k++] = b[j++];
	
	return (array);
}