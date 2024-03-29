#include "main.h"
#include <stdio.h>

/**
 * _atoi - this allows string to be converted to an integer.
 * @s: string that is to be converted.
 * Return: the converted string as integer.
 */

int _atoi(char *s)
{
	int a, b, c, len, d, digit;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';

			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}

/**
 * main - multiplies 2 given numbers
 *
 * @argv: vector of argument.
 * @argc: argument count
 *
 * Return: 0 on Success and 1 on Error.
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
