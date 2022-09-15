#include "main.h"

/**
 * print_square - prints squares
 * @size: the amount of chars
 *
 * Return: returns void
 */
void print_square(int size)
{
	int c;
	int j;

	if (size <= 0)
	_putchar('\n');

	for (j = 0; j < size; j++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
