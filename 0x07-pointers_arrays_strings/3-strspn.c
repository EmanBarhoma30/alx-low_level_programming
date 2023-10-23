#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: characters to compare against
 *
 * Return: number of bytes in the initial segment of s which consist only
 *         of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	int i = 0;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			return (count);
		}
		count++;
		s++;
	}

	return (count);
}
