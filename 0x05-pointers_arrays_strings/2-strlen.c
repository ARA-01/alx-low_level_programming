#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: this is the input string
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0') 
	{
		longi++;
		s++;
	}
	
	return (longi);
}
