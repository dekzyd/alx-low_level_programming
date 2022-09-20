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
	int n;

	for (n = 0; *(str + n) != '\0' ; n++)
		;
		n++;
	for (n /= 2; *(str + n) != '\0'; n++)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
