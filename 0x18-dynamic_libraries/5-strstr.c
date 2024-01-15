#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p)
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
