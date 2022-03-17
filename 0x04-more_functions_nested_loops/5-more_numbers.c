#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 1;

	while (i <= 10)
	{
		int j;

		for (j = 0; j <= 14; j++)
			_putchar(j + '0');
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
