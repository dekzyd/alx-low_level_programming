#include "main.h"

/**
 * square - checks if a * a is d or not
 * @a: number to be squared
 * @d: square root
 *
 * Return: a
 */
int square(int a, int d)
{
	if (a * a == d)
	{
		return (a);
	}
	if (a * a > d)
	{
		return (-1);
	}
	return (square(a + 1, d));
}
/**
 * _sqrt_recursion - prints square root of n
 * @n: square root of a number
 *
 * Return: n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (square(1, n));
}
