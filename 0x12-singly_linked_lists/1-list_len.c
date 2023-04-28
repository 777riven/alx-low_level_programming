#include "lists.h"

/**
 * list_len - Gives the number of elements
 * @h: Pointer to a list
 * Return: Integer
 **/

size_t list_len(const list_t *h)
{
	const list_t *t;
	unsigned int i = 0;

	t = h;
	while (t)
	{
		i++;
		t = t->next;
	}
	return (i);
}
