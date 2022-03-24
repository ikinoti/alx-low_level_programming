#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: size eof the destination
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (x < n && *(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}
	return (dest);
}
