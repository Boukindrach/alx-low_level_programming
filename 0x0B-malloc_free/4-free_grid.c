#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid- frees a 2 dimensional grid
 * @grid: the grid
 * @height: the height of the grid
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
