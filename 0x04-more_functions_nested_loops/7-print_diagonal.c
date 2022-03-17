#include "main.h"

/**
 * print_diagonal - draw a diagoonal line
 * @n: parameter
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			int j = 0;

			while (j <= i)
			{
				_putchar(' ');
				j++;
			}

			_putchar('\\');
			_putchar('\n');
			i++;
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
