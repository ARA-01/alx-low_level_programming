#include <stdio.h>
#include "main.h"

/**
 * create_array - create array of char and initializes it with a specific char.
 * @size: array size
 * @c: character to be initialized.
 *
 * Return: Null if it fails or pointer to the array on Success.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int n;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		str[n] = c;
	return (str);
}
