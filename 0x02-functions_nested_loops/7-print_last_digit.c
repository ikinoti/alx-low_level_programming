#include "main.h"

/**
 * print_last_digit - print last of a num
 * @n: parameter
 *
 * Description: prints the last digit of a number
 * Return: 0
 */

int print_last_digit(int n)
{
	int last_num;

	last_num = n % 10;

	if (last_num < 0)
	{
		last_num *= -1;
	}

	_putchar(last_num + '0');

	return (last_num);
}
