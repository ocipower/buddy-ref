#include "sort.h"

void quick_sort(int array[], int l, int u)
{
	srand(time(NULL));
	quick_sort_recursion(array, l, u);
}
