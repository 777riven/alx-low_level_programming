#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: input stirng
 * @c: input char to be located in s
 * Return: 0 if nothing found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
			return (0);
	}

}
