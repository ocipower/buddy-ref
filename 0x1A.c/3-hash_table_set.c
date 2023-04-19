#include "hash_tables.h"

/**
  * hash_table_set - function that adds value to the hash table based on key
  * @key: string literal from which index in the hash table is hashed
  * @value: value associated with key
  * Return: return 1 if operation is successsful, other wise 0
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;
	
	if (!key)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (!ht)
		return (0);
	new_node = add_dnodeint(key, value);
	if (!new_node)
		return (0);
	if (!ht->array[index])
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		temp = ht->array[index];
		while (temp)
		{
			if (temp->key == key)
			{
				temp->value = (char *)value;
				//free(new_node);
				return (1);
			}
			temp = temp->next;
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	return (0);
}
