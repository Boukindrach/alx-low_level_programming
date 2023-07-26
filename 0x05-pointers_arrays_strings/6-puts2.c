#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: a string
*/

void puts2(char *str)
{
	char *a = str;
	int b = 0;
	int c = 0;
	int d;

	while (*a != '\0')
	{
		a++;
		b++;
	}
	c = b - 1;
	for (d = 0; d <= c; d++)
	{
		if (d % 2 == 0)
		{
		_putchar(str[d]);
		}
	}
	_putchar('\n');
}
