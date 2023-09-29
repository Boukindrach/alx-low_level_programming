#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: The binary string to convert.
 * Return: The converted unsigned integer, or 0 if @b is NULL or contains
 *         characters other than '0' and '1'.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal_value = (decimal_value << 1) | (b[i] - '0');
	}

	return (decimal_value);
}
