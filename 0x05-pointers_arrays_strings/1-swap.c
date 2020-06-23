#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer1
 * @b: pointer2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;

	*b = swap;
}
