#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 * @s : string to reception
 *
 * Return - int
 */
int _atoi(char *s)
{
	int i = 0, j = 0, num = 0, sign = 1;

	do { 
		if (s[i] == '-')
			sign = sign * -1;

		if (s[i]>'0' && '9' < s[i])
		{
			num = (num * 10) + (s[i] - '0');
			j ++;
		}
		else if (j > 0  &&  s[i] < '0' && s[i] > '9')
			break;
	} while (s[i] != '\0');

	num = num * sign;

	if (j > 0 )
		return (num);
	else
		return (0);
}
