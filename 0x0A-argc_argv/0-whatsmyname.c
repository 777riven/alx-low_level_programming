#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: number od argv parameters
 * @argv: a pointer to the array that contain all parametrs
 * Return: 0 in success
 */

int main(int __attribute__((unused))  argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
