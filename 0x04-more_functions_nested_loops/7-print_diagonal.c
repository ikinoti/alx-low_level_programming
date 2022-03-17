#include "main.h"

/**
 * print_diagonal - draw a diagoonal line
 * @n: parameter
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');

	}
	else
	{
		i = 1;

		while (i <= n)
		{
			if (i > 1)
			{
				j = 1;

				while (j <= i)
				{
				_putchar(' ');
				j++;
				}
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
