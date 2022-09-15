#include "main.h"

/**
 * more_numbers - prints numbers from 0 - 14 using putchar
 *
 * Return: doesn't return values
 */
void more_numbers(void)
{
	int c;
	int j;

	for (j =  0; j < 10; j++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
