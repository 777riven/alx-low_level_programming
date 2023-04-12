#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to the duplicated string
 * @str: input string
 * Return: function returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc(sizeof(*str) * i + 1);
	if (str == NULL || s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			s[j] = str[j];
		}
		return (s);
	}
}
