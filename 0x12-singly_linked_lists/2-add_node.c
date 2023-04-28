#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to list
 * @str: string to add in the node
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *t;
	unsigned int l = 0;
	while (str[l])
		l++;

	t = malloc(sizeof(list_t));

	if (!t)
		return (NULL);

	t->str = strdup(str);
	t->l = l;
	t->next = (*head);
	(*head) = t;
	return (*head);
}
