#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (*(dest + x))
		x++;

	while ((*(dest + x) = *(src + y)))
	{
		x++;
		y++;
	}

	return (dest);
}
