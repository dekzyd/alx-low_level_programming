#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "_putchar";
	while (*s)
	{
		_putchar(*s);
		s = s + 1;
	};
	_putchar('\n');
	return (0);
}
