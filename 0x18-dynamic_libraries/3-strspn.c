#include "main.h"

/**
 * _strspn - Get the length of a prefix substring.
 * @s: The string to search.
 * @accept: The characters to count.
 *
 * Return: The number of bytes in the initial segment of s that consist of
 * only characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s)
	{
		int r = 0;
		int found = 0;

		while (accept[r])
		{
			if (*s == accept[r])
			{
				n++;
				found = 1;
				break;
			}
			r++;
		}

		if (!found)
		{
			return (n);
		}

		s++;
	}

	return (n);
}
