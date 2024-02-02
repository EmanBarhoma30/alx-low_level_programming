#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table.
 * @key: The key to find the index for.
 * @size: The size of the array in the hash table.
 *
 * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value;
    unsigned long int index;

    /* Get the hash value using the hash_djb2 function */
    hash_value = hash_djb2(key);

    /* Calculate the index within the size of the array */
    index = hash_value % size;

    return (index);
}
