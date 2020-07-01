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
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s+i);
			break;
		}
		i++;
	}

	return (0);
}
