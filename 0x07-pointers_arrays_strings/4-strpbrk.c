#include "main.h"
/**
 * _strspn - a function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: input stirng
 * Return: n the number of similar chars
 */
char *_strpbrk(char *s, char *accept)
{
	int n = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				n = 1;
				break;
			}

		}
		if (n == 0)
			s++;
		else
			break;
	}
	return (s);
}
