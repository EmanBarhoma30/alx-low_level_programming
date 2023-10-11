#include <stdio.h>

/**
 * main - calculates and prints the sum of even Fibonacci sequence values
 * that do not exceed 4,000,000, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long prev = 1;
	unsigned long curr = 2;
	unsigned long next;
	unsigned long evensum = 2;

	while (1)
	{
		next = prev + curr;
		
		if (next > 4000000)
			break;
			
		if (next % 2 == 0)
			evensum += next;
			
		prev = curr;
		curr = next;
	}
	
	printf("%lu\n", evensum);
	return (0);
}
