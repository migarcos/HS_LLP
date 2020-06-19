#include "holberton.h"
#include <stdio.h>

/**
 * main - prints nums 1..100
 *
 *
 * Return: Fizz % 3, Buzz % 5, FizzBuzz both
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{

		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0 && i % 5 == 0)
				printf("FizzBuzz");
			else if (i % 3 == 0)
				printf("Fizz");
			else
				printf("Buzz");
		}
		else
			printf("%d", i);

		putchar(32);
	}
	printf("Buzz\n");

	return (0);
}
