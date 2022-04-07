#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, len;
	int *a;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
