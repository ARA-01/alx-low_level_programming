#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that conatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: concatenate s1 and s2.
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, b, len1, len2, len;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		a = 0;
		while (s1[a++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		a = 0;
		while (s2[a++] != '\0')
			len2++;
	}

	len = len1 + len2;
	conct = (char *)malloc(sizeof(char) * (len + 1));

	if (conct == NULL)
		return (NULL);

	for (a = 0; a < len1; a++)
		conct[a] = s1[a];
	for (b = 0; b < len2; b++, a++)
		conct[a] = s2[b];
	conct[len] = '\0';

	return (conct);
}
