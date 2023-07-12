#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate a 2D grid of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: Pointer to a 2D grid of integers, each element initialized to 0,
 *         or NULL if width or height is 0/negative, or if there's a memory
 *         allocation error
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			a[k][l] = 0;
		}
	}

	return (a);
}
