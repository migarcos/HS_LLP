#include "holberton.h"

/**
 * print_alphabet - detect lowercase char
 * @void cause only call teh function
 *
 * Return: char
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
}
