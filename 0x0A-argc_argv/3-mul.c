#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument with values
 *
 * Return: integer
 ***/
int main(int argc, char *argv[])
{
	int mult, num1;

	if (argc != 3)
	{
		printf("ERROR \n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[2]);

		mult = atoi(argv[1]) * num1;

		printf("%d \n", mult);

		return (0);
	}
}
