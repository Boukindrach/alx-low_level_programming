#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup- returns a pointer to a newly allocated space in memory
 * @str: original string
 * Return: a pointer to the array, or NULL if it fails
*/

char *_strdup(char *str)
{
	int j, i = 0;
	char *the_copy;

	if (str == NULL)
		return NULL;

	while (str[i] != '0')
	{
		i++;
	}

	the_copy = malloc((sizeof(char) * i) + 1);

	if (the_copy == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		the_copy[j] = str[j];

	return (the_copy);
}
