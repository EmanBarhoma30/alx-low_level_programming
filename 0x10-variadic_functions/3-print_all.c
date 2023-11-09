#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on a format string.
 * @format: A format string specifying the types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		char *str; /* Move the declaration here */

		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *); /* Assign the value here */
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
