#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits to change to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int exclusive = n ^ m;
	unsigned int count = 0;

	for (i = 0; i < 64; i++)
	{
		if ((exclusive >> i) & 1)
			count++;
	}

	return (count);
}
