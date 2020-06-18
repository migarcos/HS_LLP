#include "holberton.h"
#include <stdio.h>

/**
 * main - prints nums 1..100
 *
 *
 * Return: Fizz % 3, Buzz % 5, FizzBuuz both
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{

		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0 && i % 5 == 0)
				printf("FizzBuzz ");
			else if (i % 3 == 0)
				printf("Fizz ");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
