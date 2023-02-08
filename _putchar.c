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
	int divisor;
	unsigned int num = 0;

	num = n;
	if (n < 0)
	{
		putchar('-');
		num = -n;
	}

	divisor = 1;
	while (num / divisor > 9)
		divisor *= 10;
	printf("divisor befor = %d\n", divisor);

	for (; divisor > 0; divisor /= 10)
	{
		putchar(num / divisor % 10 + 48);
	}

	printf("\ndivisor after with d = %d\n", divisor);
	
}