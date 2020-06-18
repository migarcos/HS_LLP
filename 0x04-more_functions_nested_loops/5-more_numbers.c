#include "holberton.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		int i;

		for (i = '0'; i <= '9'; i++)
			_putchar(i);

		for (i = '0'; i <= '4'; i++)
		{
			_putchar('1');
			_putchar(i);
		}

		_putchar('\n');
	}
}
