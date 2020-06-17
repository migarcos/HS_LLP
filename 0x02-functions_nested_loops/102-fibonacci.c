#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: void
 */

int main(void)
{
	long last = 1, next = 2, tmp = 0;
	int counter = 0;

	printf("%ld, %ld, ", last, next);

	while (counter < 48)
	{
		printf("%ld, ", next + last);

		tmp = last;

		last = next;

		next = tmp + last;

		counter++;
	}
	printf("\n");

	return (0);
}
