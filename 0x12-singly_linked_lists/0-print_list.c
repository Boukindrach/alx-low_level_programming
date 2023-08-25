#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: A pointer
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	int a = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			puts("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		
		h = h->next;
		a++;
	}
	return (a);
}
