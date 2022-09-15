#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 excluding 2 & 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			continue;
		_putchar(c);
	}
	_putchar('\n');
}
