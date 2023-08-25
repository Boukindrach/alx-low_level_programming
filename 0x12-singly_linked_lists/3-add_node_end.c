#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer
 * @str: string
 * Return: Null or new elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *X, *Y;
	size_t len = 0;

	while (str[len])
		len++;

	X = malloc(sizeof(list_t));
	if (X == NULL)
		return (NULL);

	X->str = strdup(str);
	if (X->str == NULL)
	{
	free(X);
		return (NULL);
	}

	X->len = len;
	X->next = NULL;

	if (*head == NULL)
	{
		*head = X;
		return (X);
	}

	Y = *head;
	while (Y->next)
		Y = Y->next;

	Y->next = X;

	return (X);
}
