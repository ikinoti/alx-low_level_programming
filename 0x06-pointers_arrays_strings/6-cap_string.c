#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: passed string
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int x, y, z;

	char arr[] = ",\t;\n; .!?\"(){}";

	for (x = 0; str[x] != '\0'; x++)
	{
		z = 0;

		if (x == 0)
		{
			z = 1;
		}
		else
		{
			for (y = 0; arr[y] != '\0'; y++)
			{
				if (str[x - 1] == arr[y])
				{
					z = 1;
					break;
				}
			}
		}
		if (z == 1)
		{
			if (str[x] <= 'z' && str[x] >= 'a')
			{
				str[x] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
