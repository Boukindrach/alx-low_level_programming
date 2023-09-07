#include <stdio.h>
#include <stdlib.h>

/**
 * array_range- creates an array of integers.
 * @min: minimum range
 * @max: maximum range
 * Return: pointer or Null if it fails
*/

int *array_range(int min, int max)
{
	int size, i;
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	p = (int *)malloc(sizeof(int) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
