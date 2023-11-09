#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print a variable number of integers with a separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;
	int num;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(arg_list, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(arg_list);
}
