#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: This is a pointer to the block of memory to fill
 * @src: This is the value to be set
 * @n: number of bytes to be set to the value
 *
 * Return: the string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
