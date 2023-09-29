#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The number to print in binary.
*/

void print_binary(unsigned long int n)
{
	unsigned long int current_bit;
	int i;
	int leading_zero = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		current_bit = n >> i;

		if (current_bit & 1)
		{
			_putchar('1');
			leading_zero = 1;
		}
		else if (leading_zero)
		{
			_putchar('0');
		}
	}
}
