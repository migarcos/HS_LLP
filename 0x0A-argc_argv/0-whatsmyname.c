#include <stdio.h>

/**
 * main - prints its name
 * @argc: argument counter
 * @argv: argument with values
 *
 * Return: the name also changed
 ***/
int main(__attribute__((unused)) int argc, char *argv[])
{
	/*if (*argv)*/
		printf("%s\n", argv[0]);

	return (0);
}
