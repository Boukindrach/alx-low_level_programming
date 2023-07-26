#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @n: Num of array that will be print
 * @a: array of integers
*/

void print_array(int *a, int n)
{
	int b = 0;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
		printf(", ");
		}
	}
	printf("\n");
}
