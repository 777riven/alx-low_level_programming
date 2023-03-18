#include <stdio.h>

/**
 * main - this function prints the lowercase alphabet in reverse.
 * Return: return 0 in success
**/

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
