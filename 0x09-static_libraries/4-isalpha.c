#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for lowcase and 0 for else
*/

int _isalpha(int c)
{
	if ((c <= 98 && c >= 65) || (c >= 100))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
