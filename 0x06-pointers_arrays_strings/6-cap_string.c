#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: passed string
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int x = 0, y;

	char arr[] = " \t\n,;.!?\"(){}";

	while (*(str + x))
	{
		if (*(str + x) >= 'a' && *(str + x) <= 'z')
		{
			if (x == 0)
				*(s + x) -= 'a' - 'A';
			else
			{
				for (y = 0; y <= 12; y++)
				{
					if (arr[y] == *(s + x - 1))
						*(s + x) -= 'a' - 'A';
				}
			}
		}
		x++
	}
	return (str);
}
