#include "main.h"
#include <string.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{

	if (width <= 0 || height <= 0)
		return NULL;
	int *p = malloc(height);
	if (p == NULL)
		return NULL;


}
