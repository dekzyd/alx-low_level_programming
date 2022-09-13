#include "main.h"

/**
 * print_sign - checks sign of number passed
 *@n: The number
 *
 * Return: Positive (1) Zero(0) and Negative (-1).
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
