#include "lists.h"

/**
 * dlistint_len- returns the number of elements in dlistint_t list.
 * @h: The head
 * Return: number of elements in the dlistint_t
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
