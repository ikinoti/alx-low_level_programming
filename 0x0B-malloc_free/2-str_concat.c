#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: NULL On failure else concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *concat_str;

	if (s1)
	{
		while (s1[len1])
			++len1;
	}
	else
	{
		s1 = "";
	}
	if (s2)
	{
		while (s2[len2])
			++len2;
	}
	else
	{
		s2 = "";
	}
	concat_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (!concat_str)
		return (NULL);

	if (s1)
	{
		for (len1 = 0; s1[len1]; ++len1)
			concat_str[len1] = s1[len1];
	}
	if (s2)
	{
		for (len2 = 0; s2[len2]; ++len2)
			concat_str[len1 + len2] = s2[len2];
	}
	concat_str[len1 + len2] = '\0';
	return (concat_str);
}
