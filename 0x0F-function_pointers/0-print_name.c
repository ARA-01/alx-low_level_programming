#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @f: pointer to the function to be printed.
 * @name: name, string.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
