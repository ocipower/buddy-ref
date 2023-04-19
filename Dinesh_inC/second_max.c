#include <stdio.h>
#include <limits.h>



int second_max(int arr[], unsigned int size);

int main()
{	
	int scond_max;
	int arr[] = {2, 5, 8, 19, 17, 10};
	unsigned int size = sizeof(arr) / sizeof(arr[0]);
	scond_max = second_max(arr, 0);
	printf("%d\n", scond_max);
	return 0;
}
int second_max(int arr[], unsigned int size)
{
	if (!arr || size < 1)
		return -1;

	int max, second_max, i;

	max = second_max = INT_MIN;


	for (i = 0; i < size; ++i)
	{
		if (arr[i] > max)
		{
			second_max = max;
			max = arr[i];
		}
		
		if (arr[i] > second_max && arr[i] != max)
		{
			second_max = arr[i]; 
		}
	}
	return second_max;
}