#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0); /* Base case: the length is 0 when the end of the string is reached */

	return (1 + _strlen_recursion(s + 1)); /* Recursively add 1 and move to the next character */
}
