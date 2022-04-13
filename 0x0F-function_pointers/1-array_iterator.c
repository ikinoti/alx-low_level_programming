#include "function_pointers.h"

/**
 * array_iterator - execute function given as parameter on each array item
 * @array: array to act on
 * @size: size of the array
 * @action: pointer to a function you need to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
