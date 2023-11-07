#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: String to check
 * @c: Character to find
 * Return: Pointer to s or NULL
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
