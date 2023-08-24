#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat- concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Null or a pointer
*/

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, d = 0, i = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[b])
		b++;

	p = malloc(a + b + 1);

	if (p == NULL)
		return (NULL);

	d = 0;
	for (i = 0; i < a; i++)
	{
		p[d] = s1[i];
		d++;
	}

	for (i = 0; i < b; i++)
	{
		p[d] = s2[i];
		d++;
	}

	p[d] = '\0';
	return (p);
}
