#include "main.h"

/**
 * print_line - prints lines
 *@s: the amount of lines to be printed
 *
 * Return: void
 */
void print_line(int s)
{
	int c;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < s; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
