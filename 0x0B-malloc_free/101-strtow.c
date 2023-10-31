#include <stdio.h>
#include <stdlib.h>

/**
 * wordCount - helper function to count words in a string
 * @str: the string to process
 *
 * Return: number of words in string
 */
int wordCount(char *str)
{
	int i, words = 0;

	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
	return (words);
}

/**
 * strtow - splits strings into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), NULL if failure
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0;
	char **words;

	if (str == NULL || *str == '\0' || wordCount(str) == 0)
		return (NULL);

	words = malloc((wordCount(str) + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (; str[i] && j < wordCount(str); )
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			int wordLength = 0;

			while (str[i + wordLength] && str[i + wordLength] != ' ')
				wordLength++;

			words[j] = malloc((wordLength + 1) * sizeof(char));
			if (words[j] == NULL)
				return (NULL);

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

/**
 * print_tab - Prints an array of string
 *
 * @tab: The array to print
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char **tab;

	tab = strtow("                ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
