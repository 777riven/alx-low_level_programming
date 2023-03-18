#include <stdio.h>

/**
 * main - this functon prints all single digit numbers of base 10 starting from
 * 0.
 * Return: 0 in success
**/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
