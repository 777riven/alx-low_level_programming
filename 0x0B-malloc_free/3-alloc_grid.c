#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: grid width
 * @height:grid height
 * Return: grid array
 */


int **alloc_grid(int width, int height)
{
	int **t;
	int i, j;

	if (width <= 0 || height <= 0)

		return (NULL);

	t = malloc(sizeof(int *) *  height);

	if (t == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			t[i] = malloc(width * sizeof(int));
			if (t[i] == NULL)
			{
				while (i >= 0)
					free(t[i--]);
				free(t);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				t[i][j] = 0;
		}

		return (t);
	}
}
