#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number
 * Return: last digit
**/

int print_last_digit(int n)
{
	int last_digit = n % 10;


	_putchar(_abs(last_digit) + '0');

	return (_abs(last_digit));
}
