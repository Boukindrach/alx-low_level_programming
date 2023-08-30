#include "main.h"

/**
 * _print_rev_recursion- prints a string in reverse
 * @s: pointer
*/

void _print_rev_recursion(char *s)
{
	char i = *s;

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(i);
}
