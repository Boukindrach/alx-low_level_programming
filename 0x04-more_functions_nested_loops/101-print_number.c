#include "main.h"

/**
 * print_number - prints an integer.
 * @n : an integer
*/

void print_number(int n)
{
	unsigned int a;

	a = n;
	if (n < 0)
	{
		a = -a;
		_putchar('-');
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
