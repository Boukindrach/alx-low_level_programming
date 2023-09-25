#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head pointer to NULL
 * @head: pointer to the listint_t list to be freed
*/

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
