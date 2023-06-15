#include "main.h"

/**
 * _puts - function taht prints a string, followed by a new line
 * to stdout.
 * @str: the string tk be printed.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
