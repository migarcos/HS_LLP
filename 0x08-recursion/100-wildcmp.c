#include "holberton.h"

/**
 * wildcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if strings identical and 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	/* both empty  */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	/* recursion compare */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	/* search by '*' */
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
