#include "sort.h"

void merge_sorted_array(int array[], int left, int mid, int right)
{
	int l_size, r_size, i, j, k;

	l_size = mid - left + 1;
	r_size = right - mid;
	
	int l_array[l_size];
	int r_array[r_size];

	for (i = 0; i < l_size; ++i)
	{
		l_array[i] = array[left + i];
	}

	for (j = 0; j < r_size; ++j)
	{
		r_array[j] = array[j + mid + 1];
	}

	i = j = 0; k = left;
	while (i < l_size && j < r_size )
		(l_array[i] < r_array[j])? (array[k++] = l_array[i++]) : (array[k++] = r_array[j++]);

	while (i < l_size)
		array[k++] = l_array[i++];

	while (j < r_size )
		array[k++] = r_array[j++];


	/*for (i = 0, j = 0, k = left; k <= right; k++)
	{
		if ((i < l_size) && (j >= r_size || l_array[i] <= r_array[j]))
		{
			array[k] = l_array[i];
			i++; 		
		}
		else
		{
			array[k] = r_array[j];
			j++;	
		}
	}*/

	/*i = j = 0, k = left; 
	while (k <= right)
	{
		if ((i < l_size) && (j >= r_size || l_array[i] <= r_array[j]))
		{
			array[k] = l_array[i];
			i++; 		
		}
		else
		{
			array[k] = r_array[j];
			j++;	
		}
		k++;
	}*/

	//print_array(array, 9);
	//printf("\n");
	
	/*for (i = 0; i < l_size; ++i)
	{
		array[i + left] = l_array[i];
	}

	for (i = 0; i < r_size; ++i)
	{
		array[i + mid + 1] = r_array[i];
	}*/



	
	

}