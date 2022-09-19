#include "main.h"

/**
 * print_rev - reverses a string
 * @str: the string to be reversed
 *
 * Return: void
 */
void print_rev(char *str)
{
	int i;
	int j, ln;
	/* calc length of string */
	ln = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		ln++;
	}

	/* print reversed string */
	for (j = ln; j >= 0; j--)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');

}
