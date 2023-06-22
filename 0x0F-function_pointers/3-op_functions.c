#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add operator, returns the sum of 2 numbers.
 * @a: first value
 * @b: second value
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub: subtract operator, returns the difference of 2 numbers
 * @a: first value
 * @b: second value
 * Return: diff between a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply operator, returns the product of 2 numbers.
 * @a: first value
 * @b: second value
 *
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator, returns the division of 2 numbers.
 * @a: first value
 * @b: second value
 * Return: quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo operator, returns the remainder
 * of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}

