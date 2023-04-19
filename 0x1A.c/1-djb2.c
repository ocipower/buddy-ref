#include "hash_tables.h"

/**
  * hash_djb2 - function to generate hash value
  * @str: input string to be converted to hash value
  * Return: return a non-negative hash value
  */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int ch;
	
	while ((ch = *str++))
		hash = ((hash << 5) + hash) + ch;
	return (hash);
}
