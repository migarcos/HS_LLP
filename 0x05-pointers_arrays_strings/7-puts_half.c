#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: pointer as string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, legth;

	i = 0;

	while (*(str + i))
		i++;
	legth = i;
	/*
	 * if legth is pair, return str to the half of the string.
	 *  + 1 because in counting, i went to '\n' character inclusive
	 */
	if (i % 2 == 0)
		i /= 2;
	/*
	 * if lecth is odd, return str to half minus 1. Additional -1 is
	 * because of i went to '\n' when counting
	 */
	else
		i = (i + 1) / 2;
	/* print str with putchar and POST-increment.*/
	while (i < legth)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
