#include <stdio.h>

/**
 * main - a program that prints number of arg, followed by a new line
 * @argc: number od argv parameters
 * @argv: a pointer to the array that contain all parametrs
 * Return: 0 in success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
