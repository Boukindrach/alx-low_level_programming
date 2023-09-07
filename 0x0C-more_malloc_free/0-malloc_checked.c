#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked- allocates memory using malloc
 * @b: memory needed
 * Return: pointer if it works, 98 if not
*/

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
