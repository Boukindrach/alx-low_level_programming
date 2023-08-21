#include "main.h"
#include <stdlib.h>

/**
 * create_array- function that creates an array of chars.
 * Return: null or p
 * @size: the size of the memory to print
 * @c: a character
*/
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);
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
	return (p);

}
