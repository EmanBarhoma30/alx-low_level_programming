#include <stdio.h>

/**
 * main - Prints the first 92 Fibonacci numbers, starts with 1 and 2.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long prev, curr, next;
	int i;

	prev = 1; /* initializing values */
	curr = 2;

	printf("%lu, ", prev);

	for (i = 1; i < 92; i++)
	{
		printf("%lu", curr);
		next = prev + curr;
		prev = curr;
		curr = next;

		if (i != 91)
		{
			printf(", ");
		}
	}

	printf("\n");
	return (0);
}
