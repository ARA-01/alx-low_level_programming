#include "main.h"

/**
 * _puts_recursion - function that is similar to puts();
 * @s: character to be printed
 * Return: 0 on success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
