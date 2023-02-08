#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
#define MAX_NAM 20
typedef struct dlistint_s
{
    int n;
    //char *name;
    char name[MAX_NAM];
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

void add_dnodeint(dlistint_t **head, const int n, char *name);
size_t print_dlistint(dlistint_t **h);













/*dlistint_t *add_dnodeint(dlistint_t **head, const int n);
size_t print_dlistint(const dlistint_t *h);
*/

#endif 