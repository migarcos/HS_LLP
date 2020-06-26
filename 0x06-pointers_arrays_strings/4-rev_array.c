#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: point to string
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, m;

	n = n - 1;
	for (i = n; i > (n / 2); i--)
	{
		j = a[i];
		m = n - i;
		a[i] = a[m];
		a[m] = j;
	}
}

