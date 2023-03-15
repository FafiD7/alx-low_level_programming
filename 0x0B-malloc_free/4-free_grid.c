#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * @grid: 2d grid
 * @height: dimension of grid
 * Description: frees memory of grid
 *
 * Return: 0.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
