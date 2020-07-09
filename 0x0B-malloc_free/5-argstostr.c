#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: size
 * @av: char matrix
 * Return: pointer to a matrix
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k = 0, lenght = 0;

	if (av == NULL || ac == NULL)
		return(NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
	}

	ptr = malloc((length + 1 + ac) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ptr[k] == av[i][j];

		ptr[k++] = '\n';
	}
	ptr[k] = '\0';

	return (ptr);

}
