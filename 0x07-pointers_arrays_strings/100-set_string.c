#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to change
 * @to: the character string to set
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
