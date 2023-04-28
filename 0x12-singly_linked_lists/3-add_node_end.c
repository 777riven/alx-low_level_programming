#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list
 * @head: @ of the first node
 * @str: @ of the string to insert into the new node
 * Return: Address of the new node
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t, *tt;
	unsigned int length = 0;
	if (str == NULL)
		return (NULL);
	t = malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);
	t->str = strdup(str);
	if (t->str == NULL)
	{
		free(t);
		return (NULL);
	}
	while (str[length])
		length++;
	t->len = length;
	t->next = NULL;
	if (*head == NULL)
	{
		*head = t;
		return (t);
	}
	tt = *head;
	while (tt->next)
		tt = tt->next;
	tt->next = t;
	return (t);
}
