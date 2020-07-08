#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: fst string
 * @s2: snd string
 * Return: pointer to n_a_s s1+s2
 **/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int size1 = 0, size2 = 0, i = 0;

	if (!s1 || !s2)
		return (NULL);
	while (s1)
		size1++;
	while (s2)
		size2++;

	ptr = malloc(sizeof(char) * (size1 + size2 + 1));

	if (!ptr)
		return (NULL);
	while (i < size1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < (size1 + size2))
	{
		ptr[i] = s2[i - size1];
		i++;
	}
	return (ptr);
}
