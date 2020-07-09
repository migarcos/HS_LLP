#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: data from grid receive
 * @height: rows from grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int c = 0;

	while (c < height)
	{
		free(grid[0];
		c++;
	}
	free(grid);
}
