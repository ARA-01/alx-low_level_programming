#include "main.h"

/**
 * puts2 - prints very other character in string.
 * @str: pointer to string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putschar(str[i]);
		}
		i++;
	}
	_putschar('\n');
}
