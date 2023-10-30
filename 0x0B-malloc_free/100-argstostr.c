#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates command-line arguments into a string.
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 *
 * Return: Concatenated string, or NULL on memory allocation failure.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}

	length += ac;
	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
