#include "main.h"

/**
 * main - print_alphabet_x10, in lowercase.
**/

void print_alphabet_x10(void)
{
	char i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
