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
	int **ptr;
	int r, c; /* rows, cols */

	if (width < 0 || height < 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		ptr[r] = malloc(sizeof(int) * width);

		if  (ptr[r] == NULL)
		{
			for (c = 0; c < width; c++)
				free(ptr[c]);
			free(ptr);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
			ptr[r][c] = 0;
	}
	return (ptr);
}
