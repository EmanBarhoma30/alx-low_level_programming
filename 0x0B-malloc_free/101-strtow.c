#include <stdlib.h>

/**
 * strtow - Splits a string into an array of words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings.
 */
char **strtow(char *str)
{
	int i, j, k, wordCount = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
	{
		words = malloc(1 * sizeof(char *));
		if (words == NULL)
			return (NULL);
		words[0] = NULL;
		return (words);
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			wordCount++;
	}

	words = malloc((wordCount + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; j < wordCount;)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			int wordLength = 0;

			while (str[i + wordLength] && str[i + wordLength] != ' ')
				wordLength++;

			words[j] = malloc((wordLength + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				while (j >= 0)
				{
					free(words[j]);
					j--;
				}
				free(words);
				return (NULL);
			}

			for (k = 0; k < wordLength; k++)
				words[j][k] = str[i + k];
			words[j][k] = '\0';
			j++;
			i += wordLength;
		}
		else
			i++;
	}

	words[j] = NULL;
	return (words);
}
