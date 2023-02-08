#include "lists.h"


void add_dnodeint(dlistint_t **head, const int n, char *name)
{
	dlistint_t * new_node;
	int i, len;	
	

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		printf("failed to allocate memory\n");
		return;
	}

	len = strlen(name) + 1;
	*new_node->name = malloc(sizeof(char) * len);

	if(new_node->name)
		new_node->name = strncpy(new_node->name, name, len);
	else
		printf("failed to write name\n");
	  new_node->name = strcpy(new_node->name, name);
	 /*for (i = 0; i < len; ++i)
	 {
	 	new_node->name[i] = name[i];
	 }*/
	 new_node->name[i] = '\0';
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;
	(*head) = new_node;

}



















/*dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next =  *head;
		new_node->prev = NULL;
	}
	else
		printf("failed to malloc\n");
	
	if (*head)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
		
	return (*head);
}*/
