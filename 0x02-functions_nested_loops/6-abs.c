#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n : parameter value
 *
 * Return: +n always
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;

	return (n);
}

/*
 *   if (n > 0)
 *	{
 *		return (n);
 *	}
 *	else
 *	 {
 *		n = n * -1;
 *		return (n);
 *	}
 */
