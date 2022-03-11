#include <stdio.h>
/**
 * main - print 0 - 9
 *
 * Return: 0
 */

int main(void)
{
	int numeric = 0;

	while (numeric < 10)
	{
		printf("%d", numeric);
		numeric++;
	}
	printf("\n");

	return (0);
}
