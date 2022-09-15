#include <stdio.h>

/**
 * print_square - prints squares
 * @size: the amount of chars
 *
 * Return: returns void
 */
print_square(int size)
{
	int c,j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (c = 0; c < size; c++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
