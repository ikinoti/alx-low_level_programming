#include <stdio.h>

/**
 * main - Entry point of a function
 * @argc: count of passed argument
 * @argv: array of argument passed
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
