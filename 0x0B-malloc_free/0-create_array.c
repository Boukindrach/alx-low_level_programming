#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array- creates an array of chars.
 * @size: the size of the memory to print
 * @c: our character
 * Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *char_array = malloc(sizeof(char) * size);


	if (size == 0)
		return (0);

	if (char_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		char_array[i] = c;

	return (char_array);
}
