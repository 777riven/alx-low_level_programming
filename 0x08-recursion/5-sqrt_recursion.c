#include "main.h"

/**
 * _sqrtN - function used in _sqrt_recursion
 *@n: input
 *@x: input
 *Return: the natural square root of a number.
 */

int _sqrtN(int x, int n)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (_sqrtN(x + 1, n));
}
/**
 * _sqrt_recursion - unction that returns the natural square root of a number.
 *@n: input
 *Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrtN(0, n));
}
