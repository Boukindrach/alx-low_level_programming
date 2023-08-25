#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Null or pointer
 */

char *argstostr(int ac, char **av)
{
	int t_len = 0;
	int x = 0;
	int i, j;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		t_len += strlen(av[i]) + 1;

	p = malloc(t_len * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			p[x++] = av[i][j];
		p[x++] = '\n';
	}
	p[x] = '\0';
	return (p);
}
