#include "function_pointers.h"

/**
 * int_index - Returns the index of the first matching element.
 * @array: Pointer to the array.
 * @size: Number of elements.
 * @cmp: Pointer to a comparison function.
 * Return: Index of the first match, or -1 if none found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
