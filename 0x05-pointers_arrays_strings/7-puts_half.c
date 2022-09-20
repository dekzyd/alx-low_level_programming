#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of the chars of a string
 * @str: the string to be read
 *
 * Return: success 0
 */
void puts_half(char *str)
{
	int i, ln, j;

	ln = strlen(str);
	/*
	* for (i = 0; *(str + i) != '\0'; i++)
	*{
	*	ln++;
	*}
	*/

	if (ln % 2 != 0)
	{
	for (j = (ln - 1) / 2; j < ln - 1 ; j++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
	}
	else
	{
	for (j = ln / 2; j < ln ; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
	}
}
