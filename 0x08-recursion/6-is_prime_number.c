#include <stdio.h>

/**
 * check_prime - Check if a number is prime
 * @n: The number to check
 * @i: The potential divisor
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Check if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is a prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
