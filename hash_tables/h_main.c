#include "hash.h"

int main()
{
	int x = 123;
	char *str = "Chris";
	size_t size = sizeof(x);
	int get_hash_1 = get_hash1(str);
	printf("normal hash = %d\n", get_hash_1);

	//int get_hash_2 = get_hash2(str, size);
	//printf("bytes hash = %d\n", get_hash_2);

	return 0;
}


