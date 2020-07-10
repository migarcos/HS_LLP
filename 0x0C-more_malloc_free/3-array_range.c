#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - create an array of int
 * @min: fst int parameter
 * @max: snd int parameter
 *
 * Return: a pointer or NULL 
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, p = 0;
	
	if (min > max)
		return (NULL);
	
	p = max - min + 1;
	
	ptr = malloc(p * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < p; i++, min++)
		ptr[i] = min;

	return (ptr);
}
