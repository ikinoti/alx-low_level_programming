#include <stdio.h>

/**
 * main - print alphabets in lowercase and uppercase
 *
 * Return: 0
 */

int main(void)
{
	char ch_lower, ch_upper;

	for (ch_lower = 'a'; ch_lower <= 'z'; ch_lower++)
	{

		putchar(ch_lower);

	}

	for (ch_upper = 'A'; ch_upper <= 'Z'; ch_upper++)
	{

		putchar(ch_upper);

	}

	putchar('\n');

	return (0);
}
