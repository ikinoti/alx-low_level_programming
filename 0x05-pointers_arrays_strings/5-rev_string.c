#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: void
 */


void rev_string(char *s)
{
	int x =  0, y = 0;

	char ch[500];

	while (*(s + x))
	{
		*(ch + x) = *(s + x);
		x++;
	}
	x -= 1;

	while (x >= 0)
	{
		*(s + x) = *(ch + y);
		y++;
		x--;
	}
}
