#include <stdio.h>

/**
 * factorial - Returns the factorial of a number
 * @n: The number to calculate factorial for
 *
 * Return: Factorial of n; -1 for error (if n is less than 0)
 */
int factorial(int n)
{
	/* Handling base cases */
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	/* Recursive case */
	return (n * factorial(n - 1));
}
