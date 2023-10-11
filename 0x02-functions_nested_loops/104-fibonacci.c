#include <stdio.h>

/**
 * main - Print the first 92 Fibonacci numbers, starting with 1 and 2.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long prev = 1;
	unsigned long curr = 2;
	int i = 2;
	
	printf("%lu, %lu", prev, curr);
	
	while(i < 92)
	{
		unsigned long next = prev + curr;
		printf(", %lu", next);
		prev = curr;
		curr = next;
		i++;
	}

	printf("\n");
	return (0);
}
