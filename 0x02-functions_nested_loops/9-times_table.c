#include "main.h"

/**
 * _print_two_digit_number - prints a two-digit number with putchar
 * @num: number to print
 *
 * Return: Nothing
 */
void _print_two_digit_number(int num)
{
	int tens = num / 10;
	int units = num % 10;

	_putchar('0' + tens);
	_putchar('0' + units);
}

/**
 * times_table - prints 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i = 0, j;

	for (; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar('0');
			}
			else if (i * j <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + i * j);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_print_two_digit_number(i * j);
			}
		}
		_putchar('\n');
	}
}
