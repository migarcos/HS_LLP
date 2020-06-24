#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer as string
 *
 * Return: void
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str)
			str++;
		else
			break;
	}
	_putchar('\n');
}
