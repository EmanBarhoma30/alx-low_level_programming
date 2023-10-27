#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - checks if a string is a positive number
 * @str: string to check
 *
 * Return: 1 if the string is a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	int i = 0;

	if (str == NULL || *str == '\0')
		return (0);

	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}

	return (1);
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
