#include "main.h"


/**
 * puts2 - print characters of a string
 * @str: string to evaluate
 *
 * Return: void
 *
 */


void puts2(char *str)
{
	int i = 0, len = 0;


	while (str[i++])
	{
		len++;
	}

	for (; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
