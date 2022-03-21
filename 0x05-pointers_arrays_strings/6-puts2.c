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
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
