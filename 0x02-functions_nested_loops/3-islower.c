#include "holberton.h"

/**
 * _islower - check for lower case
 * @c : obtain value to evaluate
 *
 * Return: 1 to lowercase, 0 other case
 */
int _islower(int c)
{
	int value = c;


	if (value < 97 || value > 122)
		return (0);
	else
		return (1);
}
