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
	unsigned int i = 0, a = 0;
	int j = 0;

	while (s[i] != '\0' && s[i] != 32)
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				a++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (a);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}

	return (s+i);
}
