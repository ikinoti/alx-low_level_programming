#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory to be filled
 * @b: byte to fill
 * @n: number of spaces to fill
 *
 * Return: character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		i[s] = b;
	}
	return (s);
}
