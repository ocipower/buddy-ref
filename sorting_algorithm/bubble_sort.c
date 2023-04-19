#include "selections.h"

int *bubble_sort(int array[], int len)
{
	
	int i, j, temp;
	i = 0;
	while (i < len-1)
	{
		j = i + 1;
		while(j < len)
		{
			printf("j =%d\n", j);
			if (array[i] > array[j])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
			
			print(array);
			printf("\n");
			j++;
		}

		i++;
	}













	/*int i, j, temp;
	i = 0;
	while (i < len-1)
	{
		j = i + 1;
		while(j < len)
		{
			printf("j =%d\n", j);
			if (array[j] < array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			
			print(array);
			printf("\n");
			j++;
		}

		i++;
	}*/
	return (array);
}