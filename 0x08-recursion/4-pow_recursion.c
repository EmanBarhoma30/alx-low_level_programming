#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x to the power of y
 * @x: The value to be raised
 * @y: The power value
 *
 * Return: The value of x raised to power y; -1 for errors (if y < 0)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
