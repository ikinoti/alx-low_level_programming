#include "main.h"

#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
		exit(98);
	return (x);
}
