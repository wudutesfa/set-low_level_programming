#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **dee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	dee = malloc(sizeof(int *) * height);

	if (dee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		dee[x] = malloc(sizeof(int) * width);

		if (dee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(dee[x]);

			free(dee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			dee[x][y] = 0;
	}

	return (dee);
}
