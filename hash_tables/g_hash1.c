#include "hash.h"


int get_hash1(char *str)
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
