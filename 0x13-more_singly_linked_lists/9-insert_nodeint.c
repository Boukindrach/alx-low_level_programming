#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a specified index
 * @head: A pointer to a pointer to the first node in the list.
 * @idx: The index where the new node should be added (0-based).
 * @n: The data to insert in the new node.
 * Return: A pointer to the new node, or NULL if insertion fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	for (i = 0; current && i < idx - 1; i++)
		current = current->next;

	if (!current)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
