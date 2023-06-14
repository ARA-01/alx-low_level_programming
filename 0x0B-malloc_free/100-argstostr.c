#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments in the program.
 * @ac: argument count
 * @av: argument vector
 * Return: NULL if ac == 0 or av == NULL.
 */

char *argstostr(int ac, char **av)
{
	int p, q, r = 0, s = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
			s++;
	}
	s += ac;

	str = malloc(sizeof(char) * s + 1);
	if (str == NULL)
		return (NULL);

	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
		{
			str[r]  = av[p][q];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
