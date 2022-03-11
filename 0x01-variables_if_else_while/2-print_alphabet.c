#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
