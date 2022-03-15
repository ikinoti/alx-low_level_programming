#include "main.h"
#include <ctype.h>

/**
 * _isalpha - print 1 or 0 depending on input
 * @c:argument
 *
 * Description: Returns 1 if c is a letter
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
