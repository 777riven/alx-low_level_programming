#include <stdio.h>

/**
 * main - thisis a function that prints the alphabet in lowercase,
 * and also  in uppercsase
 * Return: 0 in success
**/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
