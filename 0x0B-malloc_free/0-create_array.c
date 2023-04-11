#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  a function that creates an array of chars
 * @size: the array size
 * @c:the array initializes it with a specific char c.
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = size;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		s = malloc(sizeof(char) * size);
		while (i != 0)
		{
			s[i] = c;
			i--;
		}
		return (s);

	}
	return (s);
}
