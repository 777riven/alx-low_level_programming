#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: encode string
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = char(str[i] + 13);
	}
	return (str);
}
