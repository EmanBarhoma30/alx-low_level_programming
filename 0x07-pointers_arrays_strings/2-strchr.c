#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: input string
 * @c: character to find
 *
 * Return: pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
