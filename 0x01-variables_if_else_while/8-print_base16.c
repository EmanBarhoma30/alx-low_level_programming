#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    i = 48;
    while (i < 58)
    {
        putchar(i);
        i++;
    }
    
    putchar(' ');
    
    i = 97;
    while (i < 103)
    {
        putchar(i);
        i++;
    }
    putchar('\n');
    return (0);
}
