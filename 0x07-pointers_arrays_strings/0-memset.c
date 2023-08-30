#include "main.h"

/**
 * _memset-  fills memory with a constant byte.
 * @s: pointer
 * @b: char
 * @n: number
 * Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (s);
}
