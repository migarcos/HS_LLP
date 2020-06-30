#include "holberton.h"
/**
 * _strchr -  locates a character in a string
 * @s: string to compare
 * @c: of the character c in the string s
 *
 * Return:  pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}

	return (s+i);
}
