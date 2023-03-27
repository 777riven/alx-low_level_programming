#include "main.h"

/**
 * swap_int - a function that swapsthe values of 2 integers
 * @a: the pointer to the first value
 * @b: the pointer to the second one
 **/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
