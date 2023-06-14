#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_word- function to count the words in the string.
 * @s: string to measure
 * Return: number of the words counted.
 */

int count_word(char *s)
{
	int flag, g, h;

	flag = 0;
	h = 0;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] == ' ')
			flag = 0;
		else if (flag == 0)
		{
flag = 1;
			h++;
		}
	}

	return (h);
}

/**
 * *strtow - function that splits a string into words.
 * @str: string to be splitted.
 * Return: NULL if it fails or empty string on Success.
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j = 0, len = 0, words, k = 0, start, end;

	while (*(str + len))
		len++;

	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (k + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			start = i;
	}

	matrix[j] = NULL;

	return (matrix);
}
