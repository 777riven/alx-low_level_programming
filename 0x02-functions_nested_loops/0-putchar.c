#include "stdio.h"
#include "main.h"
/**
 * main - prints _putchar + a new line.
 * Return: 0 in success
**/

int main(void)
{
	int j;
	char c[] = "_putchar";
/**
	int a = sizeof(c);**/
	for (j = 0; j <=7 ; j++)
	{
		_putchar(c[j]);
	}

	_putchar('\n');

	return (0);
}
