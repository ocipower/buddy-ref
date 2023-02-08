#include "hash.h"

int get_hash(char *str);
int main()
{
	int sum_of_char = get_hash("Christian");
	printf("%d\n", sum_of_char);
	return 0;
}

int get_hash(char *str)
{
	int i, sum_char;
	if (!str)
	{
		printf("null string, cannot generate hash_value\n");
		return -1;
	}

	sum_char = 0;
	for (i = 0; i < strnlen(str, MAX_NAME); ++i)
	{
		sum_char += str[i];
	}

	return (sum_char % BUCKET_SIZE);
}
