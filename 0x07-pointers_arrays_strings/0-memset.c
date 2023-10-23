#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *start = s; /* Store the starting address */
    while (n > 0)
    {
        *s = b;
        s++; /* Move the pointer to the next memory location */
        n--;
    }
    return start; /* Return the original starting address */
}
