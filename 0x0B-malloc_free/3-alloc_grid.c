#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional int array
 * @width: columns
 * @height: rows
 *
 * Return: pointer to the concatenated string
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int r, c; /* rows, cols */

	if (width < 0 || height < 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		grid[r] = malloc(sizeof(int) * width);

		if  (grid[r] == NULL)
		{
			for (c = 0; c < width; c++)
				free(grid[c]);
			free(grid);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
			grid[r][c] = 0;
	}
	return (grid);
}
