#include <stdio.h>

void fib(unsigned long fib_max, unsigned long first_term, unsigned long second_term);
int main()
{
	unsigned long fib_max;
	unsigned long first_term;
	unsigned long second_term;

	printf("Enter fib_max: ");
	scanf("%lu", &fib_max);

	printf("\nEnter first_term: ");
	scanf("%lu", &first_term);

	printf("\nEnter second_term: ");
	scanf("%lu", &second_term);
	
	fib(fib_max, first_term, second_term);
	printf("\n");
	return 0;
}

void fib(unsigned long fib_max, unsigned long first_term, unsigned long second_term)
{
	unsigned long sum_term, mod_a, mod_b, mod_sum, start, nth_term;

	printf("(0): %lu\n(1): %lu\n", first_term, second_term);

	start = second_term;
	nth_term = start + 1;
	while (fib_max > start)
	{
		sum_term = first_term + second_term;

		if (sum_term < second_term)
			break;
		printf("(%lu): %lu\n", nth_term++, sum_term);
		first_term = second_term;
		second_term = sum_term;
		

		fib_max--;
	}

	mod_a = first_term % 100;
	first_term /= 100;
	mod_b = second_term % 100;
	second_term /= 100;

	while (fib_max > start)
	{
		mod_sum = mod_a + mod_b;

		if (mod_sum > 100)
		{
			mod_sum /= 100;
			sum_term = first_term + second_term + 1;
		}
		else
			sum_term = first_term + second_term;
		
		first_term = second_term;
		second_term = sum_term;
		mod_a = mod_b;
		mod_b = mod_sum;
		
		printf("(%lu): %lu%02lu\n", nth_term++, sum_term, mod_sum);

		fib_max--;
	}

	



}