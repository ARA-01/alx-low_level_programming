#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - prints funtion that returns the natural square root.
 * @n: value to be printed.
 *
 * Return: the natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - this recurses to find the natural square root.
 * @n: value of the square root to be calculated.
 * @i: iterator
 *
 * Return: natual square root.
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
