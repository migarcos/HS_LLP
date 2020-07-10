#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concats two strings, snd to n position
 * @s1: fst string
 * @s2: snd string
 * @n: last position to s2
 * Return: pointer to str concat
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int size = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1)
	{
		s1++;
		size++;
	}

	concat = malloc((n + 1 + size) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	while (*s1)
	{
		*concat = *s1;
		s1++;
		concat++;
	}
	while (i <= size)
	{
		*concat = *s2;
		s2++;
		concat++;
	}
	*concat = '\0';

	return (concat);

}
