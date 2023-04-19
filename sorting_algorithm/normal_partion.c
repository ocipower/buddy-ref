#include "selections.h"

void normal_partion(int array[], int start, int end)
{
	int mid, i, n;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("\nEnter the %d elements: \n", n);
	for (i = 0; i < n; ++i)
		scanf("%d", &array[i]);

	printf("\nThe entered elements are: ");

	for (i = 0; i < n; ++i)
		printf("%d ", array[i]);

	mid = (end - start) / 2;

	printf("\nThe left partition from (start-mid) is: ");
	for (i = 0; i <= mid; ++i)
		printf("%d ", array[i]);

	printf("\nThe Right partition from (mid+1)-(n-1) is: ");
	for (i = mid + 1; i < n; ++i)
			printf("%d ", array[i]);
}