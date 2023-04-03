#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: input string
 * @accept: input stirng
 * Return: n the number of similar chars
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;
	int j;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}

		}
	}
	return (n);
}
