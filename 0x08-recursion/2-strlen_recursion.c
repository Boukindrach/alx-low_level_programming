#include "main.h"

/**
 * _strlen_recursion- returns the length of a string
 * @s: a pointer
 * Return: i the the length of a string
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);
}
