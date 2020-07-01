#include "holberton.h"
/**
 * _strpbrk -  that searches a string for any set of bytes.
 * @s: original string
 * @accept: string to verify ocurrence
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
		if (!s[i])
		break;
	}
	return (0);
}
