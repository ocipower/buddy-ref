#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);
	temp = ht->array[index];

	while (temp)
	{
		if (temp->key == key)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
