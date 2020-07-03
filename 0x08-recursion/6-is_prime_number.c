#include "holberton.h"

/**
 * is_prime_number - look for a prime number
 * @n: intger input
 *
 * Retur: 1 if the input is prime
 ***/
int is_prime_number(int n)
{
	return (aux_is_prime(n, 2));
}

int aux_is_prime(int x, int y)
{
	if (x <= 1)
		return (0);
	if ((x % y == 0) && y < x)
		return (0);

	if (y == x)
		return (1);

	return (aux_is_prime(x, (y + 1)));
}
