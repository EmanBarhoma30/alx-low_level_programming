#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc and initializes it to 0
 * @nmemb: The number of elements
 * @size: The size of each element
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *temp_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	temp_ptr = ptr;
	for (i = 0; i < nmemb * size; i++)
		temp_ptr[i] = 0;

	return (ptr);
}
