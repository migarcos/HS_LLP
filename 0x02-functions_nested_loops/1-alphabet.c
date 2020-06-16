#include "holberton.h"

/*
 *function print_alphabet lowercase
 *
 *return void
 */
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
	return;
}
