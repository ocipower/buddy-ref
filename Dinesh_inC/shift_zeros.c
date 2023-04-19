#include <stdio.h>

int * shift_zeros(int a[], int size);
int main()
{
	int *ptr;
	int arr[] = {1, 0, 4, 0, 0, 5};
	unsigned int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	
	ptr = shift_zeros(arr, size);
	printf("\n");

	for (int i = 0; i < size; ++i)
	{
		printf("%d ", ptr[i]);
	}
	return 0;
}

int * shift_zeros(int a[], int size)
{
	int i, j, temp;
	// {1, 0, 4, 0, 0, 5};
	j = 0;
	for (i = 0; i < size; ++i)
	{
		if (a[i] != 0 && a[j] == 0)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}

		if (a[j] != 0)
			j++;
	}
	return a;
}