#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it
 * @size: final array position
 * @c: char to initialize
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 ****/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	while (i < size)
	{
		ptr[i] = c;

		i++;
	}

	return (ptr);
}
