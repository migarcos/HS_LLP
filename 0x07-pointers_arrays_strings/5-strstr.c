#include "holberton.h"
/**
 * _strstr -  finds the first occurrence of the substring
 * @haystack: original string
 * @needle: string to verify ocurrence
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *o = haystack, *s = needle;

		while (*haystack && *needle && *haystack == *s)
		{
			haystack++;
			s++;
		}
		if (!*s)
			return (o);

		haystack = o + 1;
	}
	return ('\0');
}
