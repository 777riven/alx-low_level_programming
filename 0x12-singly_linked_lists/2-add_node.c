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
	unsigned int len = 0;

	while (str[len])
		len++;

	t = malloc(sizeof(list_t));

	if (!t)
		return (NULL);

	t->str = strdup(str);
	t->len = len;
	t->next = (*head);
	(*head) = t;
	return (*head);
}
