#include <stdio.h>

/**
 * main - prints the sum of all multiples
 * of 3 or 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int i, a, b, sum;

	i = 0;
	sum = 0;

	do {
		a = i % 3;
		b = i % 5;
		if (a == 0 || b == 0)
		{
			sum = sum + i;
		}
		i++;
	} while (i < 1024);

	printf("%d\n", sum);
	return (0);
}
