#include "main.h"

/**
 * _atoi- convert a string to an integer
 * @s: inputed string
 * Return: an integer
*/

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ')
		s++;

	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = (result * 10) + (*s - '0');
		s++;
	}

	return (result * sign);
}
