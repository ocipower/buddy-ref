#include "hash_tables.h"

void init_hash_tables(hash_table_t **ht, unsigned long int size);
int main()
{
	hash_table_t *hash_tables = NULL; 
	init_hash_tables(&hash_tables, 10);
	hash_node_t node1 = {.key = "Feb", .value = "2023", .next = NULL};
	hash_node_t node2 = {.key = "March", .value = "2023", .next = NULL};
	hash_tables->array[1] = $node1;
	hash_tables->array[2] = &node2;
	return 0;
}

void init_hash_tables(hash_table_t **ht, unsigned long int size)
{
	hash_table_t **htb;
	
	if (!ht)
	{
		printf("Error: ht is nulled\n");
		return;
	}
	htb = ht;
	(*htb) = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!(*htb))
	{
		printf("Error: failed to allocate memory for ht\n");
		return;
	}
	(*htb)->size = size;
	(*htb)->array = (hash_node_t *)malloc(sizeof(hash_node_t *) * (*htb)->size);

	for (int i = 0; i <  (*htb)->size; ++i)
	{
		(*htb)->array[i] = NULL;
	}


}