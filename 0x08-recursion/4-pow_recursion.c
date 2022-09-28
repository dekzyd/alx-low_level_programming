#include <stdio.h>

/**
 * _pow_recursion - returns power of x.
 * @x: the val to be raised
 * @y: the power.
 *
 * Return: the product of x raised to y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return(1);
	}
	return (x * _pow_recursion(x, y - 1));
}
