#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all arguments it receives.
 * @argc: number od argv parameters
 * @argv: a pointer to the array that contain all parametrs
 * Return: 0 in success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
