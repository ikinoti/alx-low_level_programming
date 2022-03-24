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
	char str1[] = "aeotl";
	char SRT1[] = "AEOTL";
	char str2[] = "43071";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 5; y++)
		{
			if (str[x] == str1[y] || str[x] == STR1[y])
			{
				str[x] = str2[y];
				break;
			}
		}
	}
	return (str);
}

