#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: size of s2 to copy
 *
 * Return: pointer to newly allocated place in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;

	char *str;

	if (str == NULL)
		x = 0;
	else
	{
		for (x = 0; s1[x]; x++)
		y;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (y = 0; s2[y]; y++)
			;
	}
	if (y > n)
		y = n;
	str =tr malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		str[z] = s1[z];
	for (z = 0; z < y; z++)
		str[z + x] = s2[k];
	str[x + y] = '\0';
	return (str);
}
