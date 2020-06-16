#include "holberton.h"

/*
 * _isalpha - check for letter
 *
 * Return 1 to lowercase, 0 other case
 */
int _isalpha(int c)
{

	if (( c > 96 && c < 123 ) || ( c > 64 && c < 91 ))
		return (1);
	else
		return (0);
}
