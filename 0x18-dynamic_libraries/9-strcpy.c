#include "main.h"

/**
 * _strcpy - copies string pointed to by src, to the buffer pointed to by dest
 * @src: source value
 * @dest: a buffer
 * Return: the value of dest
*/

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
