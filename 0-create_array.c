#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *p = malloc (size + 1);
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	p[size] = '\0';
	return p;

}
