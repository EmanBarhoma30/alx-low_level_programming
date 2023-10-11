#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers, starting with 1 and 2.
 * Return: 0 if successful
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	int i;

	printf("1, 2");

	for (i = 0; i < 48; i++)
	{
		long int next;

		next = a + b;
		printf(", %ld", next);
		a = b;
		b = next;
	}

	printf("\n");
	return (0);
}
