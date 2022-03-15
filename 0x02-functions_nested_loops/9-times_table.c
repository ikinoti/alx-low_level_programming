
#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int x, y, prod;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (y == 0)
			{
				_putchar(48);
				continue;
			}

			prod = x + y;
			_putchar(',');
			_putchar(' ');
			if (prod >= 10)
			{
				_putchar(prod / 10 + 48);
				_putchar(prod % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(prod + 48);
			}
		}
		_putchar('\n');
	}
}
