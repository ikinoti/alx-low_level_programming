#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: copy destination
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		i[dest] = i[src];
	}
	return (dest);
}
