#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints fizzbuzz
 *
 * Return: int
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%i", x);
		}

		if (x < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
