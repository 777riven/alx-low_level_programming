#include <stdio.h>

/**
 * main - function that prints all the numbers of base 16 in lowercase.
 * Return: 0 in success
**/

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
