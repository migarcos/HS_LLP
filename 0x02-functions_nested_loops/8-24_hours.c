#include "holberton.h"

/**
 * jack_bauer -  prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hr = 0, min = 0;

	while (hr < 24)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}

		hr++;
	}
}

