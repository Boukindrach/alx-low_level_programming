#include "lists.h"

/**
 * reverse_listint - Reverses a linked list in place.
 * @head: A pointer to a pointer to the first node in the list.
 * Return: A pointer to the new first node in the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next_node;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next_node;
	}

	*head = prev;

	return (*head);
}
