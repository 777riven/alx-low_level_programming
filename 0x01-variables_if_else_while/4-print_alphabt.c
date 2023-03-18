#include <stdio.h>

/**
 * main - a function that prints the alphabet in lowercase except q and e.
 * Return: 0 in success
**/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
