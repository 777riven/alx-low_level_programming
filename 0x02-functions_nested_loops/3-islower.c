#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: the character to be checked
 * Return: 0 if c is lowercase, otherwise 0
**/

int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 0 : 1);
}
