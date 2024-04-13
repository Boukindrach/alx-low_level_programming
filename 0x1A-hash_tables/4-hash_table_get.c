#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *			a key in a hash table.
 * @ht: Pointer to the hash table.
 * @key: Key to retrieve the value for.
 *
 * Return: Value associated with the key,
 *		or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return node->value;
		node = node->next;
	}

	return (NULL);
}
