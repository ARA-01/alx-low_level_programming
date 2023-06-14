#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns pointer to a new string which is a duplicate.
 * @str: new string
 * Return: pointer to the duplicated string on Success and
 * NULL if the memory is insufficient.
 */

char *_strdup(char *str)
{
	char *ccc;
	int n, i = 0;

	if (str == NULL)
		return (NULL);
	n = 0;
	while (str[n] != '\0')
		n++;

	ccc = malloc(sizeof(char) * (n + 1));

	if (ccc == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ccc[i] = str[i];
	return (ccc);
}
