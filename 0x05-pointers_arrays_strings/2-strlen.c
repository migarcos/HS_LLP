#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to srting
 *
 * Return: string length as int
 */

int _strlen(char *s)
{
	int l = 0;

	/* if(!l) sucess if  l is NULL */
	while (s[l] != '\0') /* other way '\0' */
	{
		l++;
	}
	return (l);
}
