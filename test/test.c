#include <stdio.h>

void _print_int(int n);
int main()
{
	int n;
	printf("Enter integer to print: ");
	scanf("%d", &n);
	_print_int(n);
	printf("\n");
	return 0;
}

void _print_int(int n)
{
	int divisor = 1, num;

	num = n;
	if (n < 0)
	{
		putchar('-');
		num = -n;
	}

	while (num / divisor > 10)
		divisor *= 10;

	for (; divisor > 0; divisor /= 10)
	{
		putchar(num / divisor % 10 + 48);
	}
}