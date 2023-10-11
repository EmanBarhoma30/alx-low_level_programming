#include <stdio.h>

/**
 * main - Prints the first 92 Fibonacci numbers, starts with 1 and 2.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long prev, curr, next;
	int i;

	prev = 0; /* initializing values */
	curr = 1;

	for (i = 0; i < 92; i++)
	{
		printf("%lu", curr);

		if (i != 91)
		{
			printf(", ");
		}

		next = prev + curr;
		prev = curr;
		curr = next;
	}

	printf("\n");
	return (0);
}
