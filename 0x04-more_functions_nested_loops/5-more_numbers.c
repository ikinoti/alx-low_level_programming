#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, x, y;

	for (y = 1; y <= 10; y++)
	{
		for (i = 0; i <= 14; i++)
		{
			j = i / 10;
			x = i % 10;

			if (i > 9)
				_putchar(j + '0');

			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
