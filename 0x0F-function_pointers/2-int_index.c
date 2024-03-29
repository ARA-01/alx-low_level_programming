#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index -  function that searches for an integer.
 * funtion returns the index of the first element
 * for which the cmp function does not return 0
 * @size: number of the elements in the array
 * @array: array of the function
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: 0 on success.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
