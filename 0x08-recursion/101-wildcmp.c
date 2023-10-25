#include <stdio.h>

/**
 * wildcmp - Compares two strings with a potential wildcard *
 * @s1: The first string
 * @s2: The second string, which may contain a wildcard *
 *
 * Return: 1 if considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		if (wildcmp(s1, s2 + 1) == 1)
		{
			return (1);
		}
		return (wildcmp(s1 + 1, s2));
	}
	return (0);
}
