#include "main.h"

/**
 * swap_int - swap values of two variables
 * @a: first variable
 * @b: secont variable
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
