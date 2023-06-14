#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2-D array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **array, p, q;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (p = 0; p < height; p++)
	{
		array[p] = (int *)malloc(sizeof(int) * width);
		if (array[p] == NULL)
		{
			for (p--; p >= 0; p--)
				free(array[p]);
			free(array);
			return (NULL);
		}
	}
	for (p = 0; p < height; p++)
		for (q = 0; q < width; q++)
			array[p][q] = 0;
	return (array);
}

