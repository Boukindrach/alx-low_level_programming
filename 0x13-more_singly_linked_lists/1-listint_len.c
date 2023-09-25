#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: A pointer to the head of a linked list of type listint_t
 * Return: The total number of nodes in the linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h; h = h->next, count++)
		;

	return (count);
}
