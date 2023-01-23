#include "lists.h"

int main(int argc, char const **argv)
{
	dlistint_t *head = NULL;

	head = add_dnodeint(&head, 5);
	head = add_dnodeint(&head, 10);
	head = add_dnodeint(&head, 15);
	head = add_dnodeint(&head, 20);

	unsigned int nu = print_dlistint(head);

	printf("\nnu of nodes = %d\n", nu);

	return 0;
}