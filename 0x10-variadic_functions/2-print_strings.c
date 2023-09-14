#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings (can be NULL).
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j;
	char *str, *nil_str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
		{
			for (j = 0; str[j] != '\0'; j++)
			{
				putchar(str[j]);
			}
		}
		else
		{
			nil_str = "(nil)";
			for (j = 0; nil_str[j] != '\0'; j++)
			{
				putchar(nil_str[j]);
			}
		}
		if (separator != NULL && i != n - 1)
		{
			for (j = 0; separator[j] != '\0'; j++)
			{
				putchar(separator[j]);
			}
		}
	}

	putchar('\n');

	va_end(args);
}
