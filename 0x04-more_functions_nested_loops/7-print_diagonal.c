#include "main.h"

/**
 * print_diagonal -> printing line
 * @n: integer params
 */
void print_diagonal(int n)
{
	int i, x;

	for (i = 0; i < n; i++)
	{
		for (x = 0; x < i; x++)
		{
			_putchar(' ');
		}
		_putchar (92);
		if (i < (n-1))
			_putchar('\n');
	}
	_putchar('\n');
}
