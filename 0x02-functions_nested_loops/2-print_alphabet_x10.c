#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet in lowercase
 * 10 times, each followed by a new line.
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
