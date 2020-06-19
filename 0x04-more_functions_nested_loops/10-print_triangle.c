#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = size - i - 1;

			while (j > 0)
			{
				_putchar(' ');
				j--;
			}

			j = size - i;

			while ((size - j) >= 0)
			{
				_putchar('#');
				j++;
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
