#include "main.h"
/**
 *_strlen_recursion - function that prints a string in reverse
 *@s: the argument of the function
 *Return: the length of string
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));

	}
	return (0);
}
