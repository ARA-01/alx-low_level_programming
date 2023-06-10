#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of argumnets passed into it.
 * @argc: count of arguments.
 * @argv: vector of arguments (array).
 *
 * Return: 0 on Success.
 */

int main(int argc, char *argv[])
{

	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
