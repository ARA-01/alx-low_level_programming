#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argv: vector of arguments (array).
 * @argc: the count of arguments (number).
 * Return: 0 on Success.
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
