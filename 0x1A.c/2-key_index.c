#include "hash_tables.h"

/**
  * key_index - function gives the index of a key
  * @key: key(string) whose index is to be determined by hashing
  * @size: size  of the becket(hash table)
  * Return: retrun the index of the hashed string
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 5381;
	int ch;

	while ((ch = *key++))
		hash = ((hash << 5) + hash) + ch;
	return (hash % size);
}
