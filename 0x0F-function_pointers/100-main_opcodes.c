#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of this function.
 * @n: Number of bytes to print
 */
void print_opcodes(int n)
{
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	int i;
	unsigned char *p = (unsigned char *)print_opcodes;

	for (i = 0; i < n; i++)
	{
		printf("%02x", *(p + i));
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point for the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	print_opcodes(atoi(argv[1]));

	return (0);
}
