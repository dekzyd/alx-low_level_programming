#include "main.h"

/**
 * _abs - converts to positive number
 *@n: The number
 *
 * Return: Absolute value of n.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	return (n * -1);
}
