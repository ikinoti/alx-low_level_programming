#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of argument passed
 * @argv: arguments passed
 *
 * Return: 0 in success
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*fprt)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	fprt = get_op_func(argv[2]);

	if (fprt == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = fprt(num1, num2);

	printf("%d\n", result);
	return (0);
}
