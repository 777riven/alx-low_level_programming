#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: input string
 * @needle: input char to be found
 * Return:  a pointer to the beginning of the located substring, or Null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n == *h && *n != '\0')
		{
			h++;
			n++;
		}
		haystack++;
		if (*n == '\0')
			return (--haystack);
	}

	return (0);
}
