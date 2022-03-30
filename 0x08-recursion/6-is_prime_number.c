#include "main.h"

/**
 * prime - evaluate from 1 to n
 * @n: integer n
 * @i: iterate from 1 to n
 *
 * Return: int
 */

int prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (prime(n, i + 1));
}

/**
 * is_prime_number - check for prime number
 * @n: integer
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
