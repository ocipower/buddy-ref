#include "lists.h"


size_t print_dlistint(const dlistint_t *h)
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
}
