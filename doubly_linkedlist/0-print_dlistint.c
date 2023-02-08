#include "lists.h"

size_t print_dlistint(dlistint_t **h)
{
	dlistint_t * temp;
	size_t number_of_nodes;

	if (!*h)
	{
		printf("head is null in print\n");
		return -1;
	}

	temp = *h;

	number_of_nodes = 0;
	while (temp)
	{
		printf("(%s, %d)->", temp->name, temp->n);
		temp = temp->next;
		number_of_nodes++;
	}
	printf("null\n");
	return number_of_nodes;
}




























































/*size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	unsigned int i;

	i = 0;
	if (h)
	{
		temp = h;
	}
	printf("null->");
	while (temp)
	{
		printf("%d->", temp->n);
		temp = temp->next;
		i++;
	}
	printf("null\n");
	return (i);
}*/
