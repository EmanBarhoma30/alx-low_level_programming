#include <stdlib.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i, words;

	words = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
			words++;
	}
	return (words);
}

/**
 * free_array - Frees a two-dimensional array of strings.
 * @array: The array to free.
 * @length: The length of the array.
 */
void free_array(char **array, int length)
{
	int i;

	for (i = 0; i < length; i++)
		free(array[i]);
	free(array);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: An array of words, or NULL on failure.
 */
char **strtow(char *str)
{
	int size, first, i, j, len, pos = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	size = count_words(str);
	if (size == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (size + 1));
	if (words == NULL)
		return (NULL);

	words[size] = NULL;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
		{
			first = i;
			len = 0;
			while (str[i] != ' ' && str[i])
			{
				len++;
				i++;
			}
			words[pos] = malloc(sizeof(char) * (len + 1));
			if (words[pos] == NULL)
			{
				free_array(words, pos);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				words[pos][j] = str[first + j];
			words[pos][j] = '\0';
			pos++;
		}
	}
	return (words);
}
