#include "main.h"

/**
 * print_to_98 - prints number to 98
 * @n: argument
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if  (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n + '0');
				if (n == 98)
					continue;
			_putchar(',');
			_putchar(' ');
			n++
		}
	}
	else
	{
		while (n >= 98)
		{
			_putchar(n + '0');
			if (n == 98)
				continue;
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
}
