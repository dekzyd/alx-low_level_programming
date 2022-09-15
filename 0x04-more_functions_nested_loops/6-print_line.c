#include "main.h"

/**
 * print_line - prints lines
 *@c: the amount of lines to be printed

 * Return: void
 */
void print_line(int c)
{
	int count;

	for (count = c; c > 0; c--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
