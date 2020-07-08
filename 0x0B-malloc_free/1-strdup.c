#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup -  a pointer to a newly space in memory, which contains a copy str
 * @str: final array position
 *
 * Return: returns a pointer
 **/

char *_strdup(char *str)
{
	char *ptr;
	unsigned int size = 0, i = 0;

	if (!str) /* (str == NULL)*/
		return (NULL);

	while (str[size] != '\0') /*  (*str) not work  */
		size++;

	ptr = malloc(sizeof(char) * (size + 1));

	if (!ptr)
		return (NULL);

	while (i < size)
	{
		ptr[i] = str[i];  /*(ptr + i) = *(str + i);*/

		i++;
	}

	return (ptr);
}
