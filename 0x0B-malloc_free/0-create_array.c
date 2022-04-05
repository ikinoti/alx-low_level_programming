#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: desired array size
 * @c: value to initialize the array with
 *
 * Return: NULL if size = 0 else pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (!size)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr)
	{
		while (size > 0)
			arr[--size] = c;
	}
	return (arr);
}
