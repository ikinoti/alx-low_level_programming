#include "main.h"

/**
 * print_alphabet -  a function that prints the alphabet, in lowercase
 *
 * Return: void
 *
 */

void print_alphabet(void)
{

	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
