#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string contains only digits.
 * @s: The string to be evaluated.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_positive_number(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * multiply - Multiply two positive numbers represented as strings.
 * @s1: The first number.
 * @s2: The second number.
 *
 * Return: A dynamically allocated string containing the product.
 */
char *multiply(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j, carry = 0, digit1, digit2, result_len;
	char *result;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	result_len = len1 + len2;
	result = calloc(result_len + 1, sizeof(char));

	if (!result)
	{
		return (NULL);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = s1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = s2[j] - '0';
			carry += result[i + j + 1] + (digit1 * digit2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}

		if (carry > 0)
			result[i + j + 1] += carry;
	}

	return (result);
}

/**
 * main - Multiplies two positive numbers passed as arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	char *s1, *s2, *product;

	if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	s1 = argv[1];
	s2 = argv[2];

	product = multiply(s1, s2);

	if (!product)
	{
		printf("Error\n");
		return (98);
	}

	/* Print the product */
	printf("%s\n", product);

	free(product);

	return (0);
}
