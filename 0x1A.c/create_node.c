#include "hash_tables.h"


hash_node_t  *add_dnodeint(const char *key, const char *value)
{
	hash_node_t *new_node;
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;

	return (new_node);
}
