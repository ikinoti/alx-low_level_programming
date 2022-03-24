#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: array to rverse
 * @n: array length
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x = 0, y;

	n -= 1;

	while (x < n)
	{
		y = *(a + x);
		*(a + x) = *(a + n);
		*(a + n) = y;
		x++;
		n--;
	}
}
