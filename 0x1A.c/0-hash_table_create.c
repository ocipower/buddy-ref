#include "hash_tables.h"

/**
  * hash_table_create - function creates a hash table
  * @size: size of thw hash table
  * Return: returns a pointer to the created hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * hash_table->size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < hash_table->size; ++i)
		hash_table->array[i] = NULL;

	return (hash_table);
}
