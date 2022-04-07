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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = 0;

	while (s1[x])
		x++;

	str = malloc(sizeof(*str) * x + n + 1);

	if (str == NULL)
		return (NULL);

	for (y = 0, z = 0; y < (x + n); y++)
	{
		if (y < x)
		{
			str[y] = s1[y];
		}
		else
		{
			str[y] = s2[z++];
		}
	}
	str[y] = '\0';
	return (str);
}
