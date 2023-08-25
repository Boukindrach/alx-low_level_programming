#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup- function that returns a pointer to a newly allocated space
 * @str: a string
 * Return: p or Null
*/

char *_strdup(char *str)
{
	char *p = (char *)malloc(strlen(str) + 1);

	if (str == NULL)
		return (NULL);
	if (p == NULL)
		return (NULL);

	strcpy(p, str);
	return (p);
}
