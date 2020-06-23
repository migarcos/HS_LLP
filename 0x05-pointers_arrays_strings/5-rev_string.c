#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s: pointer as string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, aux, flag = 0;

	for (i = 8; i > 5; i--)
	{
		aux = s[i];
		s[i] = s[flag];
		s[flag] = aux;
		flag++;
	}
}
