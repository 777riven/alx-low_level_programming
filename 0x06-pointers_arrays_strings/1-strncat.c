#include "main.h"
#include <string.h>

/**
 * _strncat - concatenatesn bytes to string
 * @dest: input parameter string
 * @src: input parameter string
 * @n: number of bytes to concatenate
 * Return: dest
**/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
