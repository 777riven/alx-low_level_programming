#include "main.h"

/**
 * prime - check if n is a prime number
 *@n: input
 *@x: input
 *Return: 1 success 0 else.
 */

int prime(int x, int n)
{
	if (x < n)
	{
		if (n % x == 0 || n <= 1)
			return (0);
		else
			return (prime(x + 1, n));
	}
	else if (x > n)
		return (0);
	else
		return (1);
}
/**
 * is_prime_number - check if n is a prime number
 *@n: input
 *Return: 1 success 0 else.
 */

int is_prime_number(int n)
{
	return (prime(2, n));
}
