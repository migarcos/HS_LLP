#include "holberton.h"

/**
 * _puts - prints a string
 * @str: pointer as string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != !i) /* '\0' */
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
