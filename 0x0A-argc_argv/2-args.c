#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: argument with values
 *
 * Return: integer
 ***/
int main(__attribute__((unused)) int argc, char *argv[])
{
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}

	return (0);
}
