#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list and returns its data.
 * @head: Pointer to the first element in the linked list.
 * Return: The data inside the element that was deleted,
 * or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *next_node;

	if (head && *head)
	{
		num = (*head)->n;
		next_node = (*head)->next;

		free(*head);
		*head = next_node;
	}

	return (num);
}
