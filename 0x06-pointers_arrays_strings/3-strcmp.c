#include "main.h"

/**
 * _strcmp -  comare two strings
 * @s1: first string
 * @s2: the other string
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	for (; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}
