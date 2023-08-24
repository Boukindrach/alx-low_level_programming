#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid- returns a pointer to a 2 dimensional array of integers
 * @height: height of the grid
 * @width: width of the grid
 * Return: Null or a pointer
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = (int *)calloc(width, sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			free(p[j]);
			free(p);
			return (NULL);
		}
	}
	return (p);
}
