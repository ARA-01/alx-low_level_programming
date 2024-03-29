#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @size: size of the array.
 * @array: array function.
 * @action: pointer to the function to be used.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
