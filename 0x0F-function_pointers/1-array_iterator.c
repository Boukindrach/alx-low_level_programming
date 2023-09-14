#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - given as a parameter on each element of an array
 * @array: Pointer to the integer array.
 * @size: Number of elements in the array.
 * @action: Pointer to a function that takes an integer and performs an action.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
