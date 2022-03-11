#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char aphabetz;

	for (aphabetz = 'z'; aphabetz >= 'a'; aphabetz--)
	{
		putchar(aphabetz);
	}
	putchar('\n');

	return (0);
}
