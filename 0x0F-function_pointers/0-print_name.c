#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print a name using a pointer to a printing function.
 * @name: The name to be printed.
 * @f: A pointer to a function responsible for printing the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
