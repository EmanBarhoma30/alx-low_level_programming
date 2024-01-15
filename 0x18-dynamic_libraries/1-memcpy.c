#include "main.h"

/**
 * _memcpy - Copies a memory area.
 * @dest: Memory where the data is copied.
 * @src: Memory from which data is copied.
 * @n: Number of bytes to copy.
 *
 * Return: A pointer to the destination memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Use 'i' for loop iteration */
	unsigned int i;

	/* Copy data from 'src' to 'dest' */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
