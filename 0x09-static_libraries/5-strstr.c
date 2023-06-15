#include "main.h"

/**
 * _strstr - function for Entry point
 * @haystack: input to evaluate
 * @needle: input to evaluate
 * Return: Always 0 on Sucess
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
