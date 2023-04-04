#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - dyagonals sum
 * @a: 2D array of integers
 * @size: size of a
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	int s = size - 1;

	for (i = 0; i <= s; i++)
	{
		sum1 += a[i];
		sum2 += a[s - i];
		a = a + size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
