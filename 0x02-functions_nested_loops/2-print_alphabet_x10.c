#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabe
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		char ch = 'a';

		for (ch = 'a'; ch <= 'z'; ch++)
		{

			_putchar(ch);

		}

		counter++;
		_putchar('\n');
	}
}
