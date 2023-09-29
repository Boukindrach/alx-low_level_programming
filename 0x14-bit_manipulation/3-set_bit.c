#include "main.h"

/**
 * set_bit - Sets a bit at a specified index to 1 in an unsigned long int
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set to 1
 * Return: 1 on success, or -1 if the index is out of range.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
