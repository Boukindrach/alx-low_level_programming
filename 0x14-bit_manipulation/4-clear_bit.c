#include "main.h"

/**
 * clear_bit - Clears a bit at a specified index in an unsigned long int
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear (0-based).
 * Return: 1 on success, or -1 if the index is out of range.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
