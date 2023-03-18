#include <stdio.h>

/**
 * main -  a C program that prints the alphabet in lowercase
 * followed by a new line
 * Print all the letters except q and e
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
