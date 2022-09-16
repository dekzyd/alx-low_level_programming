#include "main.h"

/**
 * print-diagonal - draw diagonal 
 * @n: the number of times
 * Return: Always 0
 */
void print_diagonal(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; i <= i; j++)
			{
				if (j == 1)
					_putchar('\\');
				else
					_putchar(' ');

			}
			_putchar('\n');
		}
	}
}
