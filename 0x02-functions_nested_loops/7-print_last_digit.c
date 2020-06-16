#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: parameter to evaluate
 *
 * Return: integer
 */
int print_last_digit(int x)
{
	int r;

	if (x < 0)
		x = x * -1;

	r = x % 10; /* remainder of division */

	_putchar(r + '0');
	return (r);
}
