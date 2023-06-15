#include "main.h"
#include <stdlib.h>

char **strtow(char *str);
int word_len(char *str);
int count_words(char *str);

/**
 * word_len - function that locates the index of the end of the
 * first word in a string  is located.
 * @str: string to be located.
 * Return: index marking of the first word points to the string.
 */

int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - the number of words enclosed within a string is counted.
 * @str: string to be evaluated.
 * Return: the number of words enclosed within the string.
 */

int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * strtow - function that splits string into words.
 * @str: string to be splitted.
 * Return: str == "" on Success or NULL on Error.
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, r, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (r = 0; r < words; r++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);
		strings[r] = malloc(sizeof(char) * (letters + 1));

		if (strings[r] == NULL)
		{
			for (; r >= 0; r--)
				free(strings[r]);

			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[r][l] = str[index++];

		strings[r][l] = '\0';
	}
	strings[r] = NULL;

	return (strings);
}
