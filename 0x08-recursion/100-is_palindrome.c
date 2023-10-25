#include <stdio.h>
#include <string.h>

/**
 * helper - compares the characters in a string
 * @s: string to check
 * @start: start index
 * @end: end index
 *
 * Return: 1 if characters match, 0 otherwise
 */
int helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0)
	{
		return (1);
	}
	return (helper(s, 0, length - 1));
}
