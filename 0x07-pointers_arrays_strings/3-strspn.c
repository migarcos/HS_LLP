#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to compare
 * @accept: of the character c in the string s
 *
 * Return:  the number of bytes in the initial segment:
 */
unsigned int _strspn(char *s, char *accept)
{
	int k = 0, l;

	while  (*(s + k))
	{
		l = 0;
		while (*(accept + l))
		{
			if (*(accept + l) == *(s + k))
			{
				break;
			}
			l++;
		}
		if (!*(accept + l))
		{
			return (k);
		}
		k++;
	}
	return (k);
}
