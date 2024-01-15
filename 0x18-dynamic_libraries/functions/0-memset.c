#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Pointer to the memory to be filled.
 * @b: The value to be set in the memory.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (start);
}
