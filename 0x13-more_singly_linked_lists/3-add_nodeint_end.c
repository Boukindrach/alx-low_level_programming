#include "lists.h"

/**
 * add_nodeint_end - Inserts a new node at the end of a linked list.
 * @head: A pointer to a pointer to the first element in the list.
 * @n: The data value to insert into the new element.
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		listint_t *temp = *head;

		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
