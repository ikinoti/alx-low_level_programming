#include <stdio.h>

/**
 * main -  entry point
 * @argc: count of passed argument
 * @argv: array of argument passed
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
