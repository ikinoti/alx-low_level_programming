#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: size of the destination
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (*(dest + x))
		x++;

	while (y < n && *(src + y))
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}

	if (y < n)
		*(dest + x) = *(src + y);

	return (dest);
}
