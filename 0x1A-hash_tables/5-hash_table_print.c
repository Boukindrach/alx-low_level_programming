#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Pointer to the hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char printed_pair = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (printed_pair == 1)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);

			node = node->next;
			printed_pair = 1;
		}
	}

	printf("}\n");
}
