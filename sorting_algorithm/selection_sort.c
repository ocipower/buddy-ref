#include "selections.h"

int *selection_sort(int array[], int len)
{
	printf("original array: ");
	print(array);
	printf("\n");
	int i, j, temp, min_idx;
	//make n-2 pass: Reason, the last element at n-1 postion is sorted by default after n-2 passes

	for (i = 0; i < len-1; i++)
	{
		assumed_idx_with_min_element = i;   /* min_idx: index of first element 
							in unsorted array*/

						/*j: index of second element 
						in unsorted array*/
		/*for each index in i(n-2) pass, make n-1 pass
		to compare adjacent elements so as to find the new min_idx*/
		for (j = i + 1; j < len; j++)
		{
			/* find the min_idx*/
			if (array[j] < array[assumed_idx_with_min_element])
			{
				assumed_idx_with_min_element = j;
			}
			
		}
		//swap
		temp = array[i];
		array[i] = array[assumed_idx_with_min_element];
		array[assumed_idx_with_min_element] = temp;
		print(array);
		printf("\n");
		
	}
	return (array);
}
