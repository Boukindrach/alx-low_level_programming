#include "hash_tables.h"

/**
 * key_index - Computes the index for storing a 
 *		key/value pair in a hash table array.
 * @key: The key to determine the index.
 * @size: The size of the hash table array.
 *
 * Return: The computed index for the key.
 *
 * Description: Uses the djb2 hash algorithm to compute the index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
