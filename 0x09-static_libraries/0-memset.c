#include "main.h"
/**
 * _memset - function to fill a block of memory with a specific value
 * @s: memory's start address to be filled
 * @b: desired value
 * @n: number of the bytes to change
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
