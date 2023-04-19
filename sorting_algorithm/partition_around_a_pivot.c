#include "selections.h"

int partition(int array[], int start, int end)
{
	// {7, 2, 4, 1, 5}1, 2, 4, 5 7
	int p_idx, i, j, p_element, temp, temp2;

	p_idx = start;
	p_element = array[end];

	for (i = start; i < end; ++i)
	{
		printf("Iteration %d=== ", i + 1);
		if (array[i] <= p_element)
		{
			printf("array[p_idx] is %d and at index %d: however if %d at index %d is "\
				"less than %d\n", array[p_idx],p_idx, array[i], i, p_element);
			swap(&array[i], &array[p_idx]);
			//printf("if %d is less than %d\n", array[i], p_element);
			print(array);
			printf("\n");
			p_idx += 1;
			//printf("p_idx =%d\n", p_idx);
			//printf("i =%d\n", i);
			continue;
		}
		printf("%d at index %d not swapped\n", array[i], i);
	}
	swap(&array[end], &array[p_idx]);

	return p_idx;
}