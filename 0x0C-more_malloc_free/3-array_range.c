#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: A pointer to the allocated array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max;)
		arr[i++] = min++;

	return (arr);
}
