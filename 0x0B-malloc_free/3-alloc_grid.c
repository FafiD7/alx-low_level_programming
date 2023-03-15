#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array.
 * @width: an input
 * @height: an input
 *
 * Return: 0.
 */

int **alloc_grid(int width, int height)
{
	int **n;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	n = malloc(sizeof(int *) * height);
	if (n == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		n[i] = malloc(sizeof(int) * width);
		if (n[i] == NULL)
		{
			for (; i >= 0; i--)
				free(n[i]);
			free(n);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			n[i][j] = 0;
	}
	return (n);
}
