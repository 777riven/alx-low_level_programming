#include "main.h"

/**
 * _memcpy - fills memory with a constant byte.
 * @dest: starting & to the memory to be filled
 * @src: replacement value
 * @n: numb of bytes to be changed
 * Return: _memscpy the updated array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
