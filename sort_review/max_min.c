#include <stdio.h>

typedef struct 
{
	int max;
	int min;
} max_min;

max_min mx_mn(int * a, int len)
{
	max_min r;
	int i, j, max, min;

	r.max = a[0];
	r.min = a[0];

	for (i = 1; i < len; ++i)
	{
		if (a[i] < r.min)
			r.min = a[i];

		if (a[i] > r.max)
			r.max = a[i];

	}
	return (r);
}

int main()
{
	int a[] = {8, 3, 7, 9, 11, 89, -1};
	int size = sizeof(a) / sizeof(a[0]);
	max_min result = mx_mn(a, size);
	printf("result.max = %d\n result.min = %d\n", result.max, result.min);
	return 0;
}