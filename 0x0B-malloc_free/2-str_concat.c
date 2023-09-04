#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array- concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer, or NULL if it fails
*/

char *str_concat(char *s1, char *s2)
{
	int j = 0, i = 0, b;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	p = malloc(sizeof(char) * (i + j + 1));

	if (p == NULL)
		return (NULL);

	for (b = 0; b < i; b++)
		p[b] = s1[b];

	for (b = 0; b < j; b++)
		p[i + b] = s2[b];

	p[i + j] = '\0';

	return (p);
}
