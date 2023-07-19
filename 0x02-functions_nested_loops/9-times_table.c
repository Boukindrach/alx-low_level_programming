#include "main.h"
/**
 * jack_bauer - computes the absolute value of an integer
*/
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 0; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;
			if (c <= 0)
			
				_putchar(' ');
			
			else 
			
				_putchar((c / 10) + '0');

			_putchar((c % 10) + '0');
			
		}
		_putchar('\n');
	}
}
