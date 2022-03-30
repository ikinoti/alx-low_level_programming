#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: passed int
 *
 * Return: Natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - find square root
 * @a: same value as n
 * @b: squareroot
 *
 * Return: int
 */

int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b < a)
		return (_sqrt(a, b + 1));
	else
		return (-1);

}
