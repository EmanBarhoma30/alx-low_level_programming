#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates the first n characters of s2 to s1
 * @s1: The destination string
 * @s2: The source string
 * @n: The number of characters from s2 to concatenate
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = n < strlen(s2) ? n : strlen(s2);

	s = malloc(len1 + len2 + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (j = 0; j < len2; i++, j++)
		s[i] = s2[j];

	s[i] = '\0';

	return (s);
}
