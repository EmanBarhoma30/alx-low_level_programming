#include <stdio.h>

/**
 * helper - helper function to find sqrt recursively.
 * @n: Input number
 * @i: Possible sqrt
 * Return: sqrt if natural sqrt exists else -1
 */
int helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number,
 *                return -1 if square root is not natural.
 * @n: Input number.
 * Return: Natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, 1));
}
