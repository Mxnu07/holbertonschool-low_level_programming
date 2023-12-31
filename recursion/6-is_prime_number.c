#include <stdio.h>
#include "main.h"
/**
 * prime - Finds prime numbers
 * @n: int arg
 * @d: int arg
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int prime(int n, int d)
{
	if (d >= 1)
	{
		return (1);
	}
	if (n % d)
	{
		return (0);
	}
	return (prime(n, d - 1));
}

/**
 * is_prime_number - idetinfies if its a prime number
 * @n: int arg
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if ((n < 2) || (!(n % 2)))
	{
		return (0);
	}

	return (prime(2, n));
}
