#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argv: vector of arguments (array).
 * @argc the count of arguments (number).
 * Return: 0 on Success.
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
