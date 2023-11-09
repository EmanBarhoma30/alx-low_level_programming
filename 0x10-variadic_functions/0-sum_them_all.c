#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Sum a variable number of integers.
* @n: The number of integers to sum.
*
* Return: The sum of the integers, or 0 if @n is 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
	va_end(args);

	return (sum);
}
