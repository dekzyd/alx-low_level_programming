#include "main.h"

/**
 * print_last_digit - prints last digit of a val
 *@n: The number
 *
 * Return: last digit of n.
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	return _abs(last);
}
