#include "main.h"
/**
 * leet - encodes a string
 * @str: the string to encode
 *
 * Return: the encode string
 */
char *leet(char *str)
{
	int i, j;
	char c[] = "aeotl";
	char n[] = "43071";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (str[i] == c[j] || str[i] == c[j] - 32)
			{
				str[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
