#include "main.h"

/**
 * _pow - Calculates (base ^ power).
 * @base: Base of the exponent.
 * @power: Power of the exponent.
 *
 * Return: Value of (base ^ power).
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int result = 1;
	unsigned int i;

	for (i = 1; i <= power; i++)
	{
		result *= base;
	}
	return (result);
}

/**
 * print_binary - Prints a number in binary notation.
 * @n: Number to print.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	unsigned long int check;
	char flag = 0;

	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
