#include "hash.h"


int get_hash2(void * input, size_t size)
{
	size_t sum_of_bytes = 0;

	uint8_t *byte = (uint8_t *)input;

	for (int i = 0; i < size; ++i)
	{
		sum_of_bytes += byte[i];
	}
	return (sum_of_bytes % BUCKET_SIZE);
}