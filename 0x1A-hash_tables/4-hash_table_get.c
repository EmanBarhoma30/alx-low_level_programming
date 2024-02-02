#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 * @ht: The hash table to search.
 * @key: The key to look for.
 *
 * Return: The value associated with the key, or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Calculate the index for the key using the hash function */
	index = key_index((const unsigned char *)key, ht->size);

	/* Search for the key in the linked list at the calculated index */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value); /* Key found, return the associated value */
		current = current->next;
	}

	return (NULL); /* Key not found */
}
