#include <stdio.h>

/**
 * main - prints num args passed
 * @argc: argument counter
 * @argv: argument with values
 *
 * Return: integer
 ***/
int main(int argc, __attribute__((unused)) char *argv[])
{
		printf("%d\n", argc - 1);

	return (0);
}
