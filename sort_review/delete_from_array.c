#include "sort.h"

void delete_item(int a[], int len, int at_idx)
{
	int i, j;

	i = at_idx;

	for (; i < len; ++i)
	{
		a[i] = a[i +1];
	}
	len = len - 1;
}

int main(int argc, char const *argv[])
{
	int a[] = {1, 2, 3, 4, 5, 6};
	print_array(a, 6);
	delete_item(a, 6, 3);
	print_array(a, 5);
	return 0;
}