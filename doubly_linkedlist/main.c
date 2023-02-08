#include "lists.h"

int main()
{
	dlistint_t *head = NULL;

	//add_dnodeint(dlistint_t **head, const int n, char *name)
	 add_dnodeint(&head, 5, "Evelyn");
	add_dnodeint(&head, 10, "Dan");
	add_dnodeint(&head, 15, "Martin");
	add_dnodeint(&head, 20, "Christian");


	unsigned int nu = print_dlistint(&head);

	printf("\nnu of nodes = %d\n", nu);

	return 0;
}