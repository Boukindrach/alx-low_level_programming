#include "hash_tables.h"

/**
 * hash_table_create - Initializes and
 *			allocates memory for a hash table.
 * @size: The size of the array.
 *
 * Return: On success - A pointer to the newly created hash table
 *         On failure - NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/* Allocate memory for hash table */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/* Initialize hash table properties */
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);  /* Free allocated memory for hash table */
		return (NULL);
	}

	/* Initialize array elements to NULL */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
