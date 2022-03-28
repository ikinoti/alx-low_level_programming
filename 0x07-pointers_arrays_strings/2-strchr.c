#include "main.h"

/**
 * _strchr - find a char in a string
 * @s: string to check
 * @c: character to look for
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i[s]; i++)
	{
		if (i[s] == c)
			return (s + i);
	}
	if (i[s] == c)
		return (s + i);

	return (0);
}
