#include "main.h"

/**
 * _strcpy - Copies a string from src to dest
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}

	for (int b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}

	dest[a] = '\0';

	return (dest);
}
