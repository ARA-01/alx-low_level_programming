#include "main.h"
#include <stdio.h>

/**
 * main - function that prints its name, followed by a new line.
 * @agrv: the array of arguments.
 * @agrc: the count of arguments.
 *
 * Return: 0 on Success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
