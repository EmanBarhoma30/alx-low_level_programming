#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Prints each element of an array.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @action: Pointer to a function to be applied to each element.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
