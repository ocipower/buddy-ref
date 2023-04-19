#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	int i;
	
	if (!ht)
		return;
	putchar('{');
	for (i = 0; i < ht->size; ++i)
	{
		if (!ht->array[i])
			continue;

		printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		if (ht->array[i])
		{
			putchar(',');
			putchar(' ');
		}
		//putchar(',');
		//putchar(' ');

	}
	putchar('}');
	putchar('\n');
}