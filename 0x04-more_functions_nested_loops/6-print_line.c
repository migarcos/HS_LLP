#include "holberton.h"

/**
 * print_line - draws a straight line
 * @n: line long chars
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		_putchar('_');
	}

	_putchar('\n');
}
