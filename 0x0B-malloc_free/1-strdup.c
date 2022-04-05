#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to a string
 *
 * Return: NULL if str = NULL else a pointer to the duplicate string
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;

		duplicate = malloc(sizeof(char) * size);

		if (duplicate)
		{
			while (size--)
				duplicate[size] = str[size];

			return (duplicate);
		}
	}
	return (NULL);
}
