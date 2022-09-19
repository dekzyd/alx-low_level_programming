#include <stdio.h>

/**
 * swap_int - swaps values of two integers
 * @a: the first integer
 * @b: the 2nd integer
 *
 * Return: returns void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
