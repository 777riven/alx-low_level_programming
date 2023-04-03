#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: starting & to the memory to be filled
 * @b: replacement value
 * @n: numb of bytes to be changed
 * Return:_memset the updated array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
