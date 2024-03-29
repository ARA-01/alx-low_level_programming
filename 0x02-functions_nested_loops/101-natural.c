/*
 * File: 101-natural.c
 * Auth: vincent kip
 */

#include <stdio.h>

/**
 * main - lists all the natural numbers below 1024 (excluded)
 * that are mulitples of 3 or 5 below
 *
 * Return: Always 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
