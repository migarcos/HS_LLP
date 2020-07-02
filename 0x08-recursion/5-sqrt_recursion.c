#include "holberton.h"

/**
 * auxsqrt - root aux
 * @n: the number
 * @i: counter
 * 
 * Return: int
 **/
int auxsqrt(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
             return (auxsqrt(n , i + 1));
	else
		return (-1);
}
/**
  * _sqrt_recursion - square root of a number
  * @n: the number
  * Return: int
  **/

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n <= 0)
		return (-1);
	if (n == 0)
		return (0);

	return (auxsqrt(n, i + 1));
}

