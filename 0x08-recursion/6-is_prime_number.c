#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - returns a prime number or not.
 * @n: number to check.
 *
 * Return: 1 on Success (prime number), 0 on error.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - this calculates the prime number recursively.
 * @n: number to check.
 * @i: an iterator.
 *
 * Return: 1 on Success (prime number), 0 on Error (not prime).
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
