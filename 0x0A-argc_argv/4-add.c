#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: number od argv parameters
 * @argv: a pointer to the array that contain all parametrs
 * Return: 0 in success
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]))
				{
					continue;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
