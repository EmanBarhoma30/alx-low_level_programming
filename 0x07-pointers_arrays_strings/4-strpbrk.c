#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence in a string of any bytes in accept
 * @s: input string
 * @accept: bytes to search for
 *
 * Return: pointer to the first matching byte in s, or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;
		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
