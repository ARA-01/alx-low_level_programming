#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks if the strings are digit.
 * @str: array of the string.
 * Return: 0 on Success and 1 on Error.
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - prints the result followed by a new line.
 * @argc: arguments count.
 * @argv: argument vector.
 *
 * Return: 0 on Success and 1 on Error.
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
