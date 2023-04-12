#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: input string
 * @s2: input string 2
 * Return:  pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int k = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	else
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 == NULL)
		s2 = "";
	else
	{
		while (s2[k] != '\0')
			k++;
	}

	s = malloc(sizeof(char) * (i + k) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i + k; j++)
		{
			if (j < i)
			s[j] = s1[j];
			else
				s[j] = s2[j - i];
		}
		return (s);
	}
}
