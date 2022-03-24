#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: passed string
 *
 * Return: char
 */

char *leet(char *str)
{
	int x, y;
	char arr[] = "aAeEoOtTlL";
	char arr1[] = "4433007711";

	for (x = 0; *(str + x); x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (arr[y] == *(str + x))
				*(str + x) = arr1[y];
		}
	}
	return (str);
}
