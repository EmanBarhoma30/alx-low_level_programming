#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory where data is copied to
 * @src: memory where data is copied from
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Change the type of i to unsigned int */
	unsigned int i;

	for (i = 0; i < n; i++) /* Use unsigned int i in the loop */
	{
		dest[i] = src[i];
	}

	return (dest); /* Wrap the return value in parentheses */
}
