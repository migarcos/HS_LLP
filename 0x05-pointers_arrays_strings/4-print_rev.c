#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer as string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != !i)
		i++;

	i--;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
