#include "main.h"

/**
 * get_endianness - this function checks if a machine is little or big endian.
 * Return: 0 for big median, 1 for little endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
