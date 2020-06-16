#include "holberton.h"

/*
 * print_alphabet_x10 - reuse _putchar to print
 *
 *return void
 */
void print_alphabet_x10(void)
{
	int l = 97, x = 0;

	for (; x < 10; x++)
	{
		do {
			_putchar(l);

			l++;

		} while (l < 123);

		l = 97;

		_putchar(10);
	}
	return;
}

