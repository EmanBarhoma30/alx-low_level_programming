#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of diagonals
 * @a: input pointer to the start of matrix
 * @size: size of square matrix
 *
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i]; /* elements from main diagonal */
		sum2 += a[(size - 1) * (i + 1)]; /* elements from other diagonal */
	}
	printf("%d, %d\n", sum1, sum2);
}
