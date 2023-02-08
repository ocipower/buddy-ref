#include <stdio.h>
#include <string.h>


int hash_func(char *str);
int ascii(const char ch);
int main()
{
	int ret, n;
	char str[] = "Christain";
	ret = hash_func(str);
	printf("%d\n\n", ret);
	n = ascii('c');
	printf("%d\n", n);
	return 0;
}

int hash_func(char *str)
{
	int i, sum_name;
	sum_name = 0;
	for (i = 0; i < strlen(str) + 1; ++i)
	{
		printf("%d\n", str[i]);
		sum_name += str[i];
	}
	return sum_name;
}

int ascii(const char ch)
{
	return (int)ch;
}