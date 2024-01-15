#include <stdio.h>

/**
 * add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of subtracting b from a
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The result of dividing a by b
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - Computes the remainder of the division of two integers
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The remainder of the division of a by b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* Example usage of the functions */
	int result_add = add(10, 5);
	int result_sub = sub(10, 5);
	int result_mul = mul(10, 5);
	int result_div = div(10, 5);
	int result_mod = mod(10, 5);

	printf("Addition: %d\n", result_add);
	printf("Subtraction: %d\n", result_sub);
	printf("Multiplication: %d\n", result_mul);
	printf("Division: %d\n", result_div);
	printf("Modulus: %d\n", result_mod);

	return (0);
}
