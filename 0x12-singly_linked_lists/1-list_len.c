#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: a pointer
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t a;

	for (a = 0 ; h != NULL; h = h->next)
	{
		a++;
	}
	return (a);
}
