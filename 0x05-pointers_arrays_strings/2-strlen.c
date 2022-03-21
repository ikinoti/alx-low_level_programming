#include "main.h"

/**
 * _strlen - return length of a string
 * @s: passed string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len))
		len++;

	return (len);
