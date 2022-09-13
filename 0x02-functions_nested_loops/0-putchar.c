#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0.
 */
int main()
{
	char s[] = "_putchar";
	int c = 0;
	while (s[c])
	{
		_putchar(s[c]);
		c++;
	};
	_putchar('\n');
	return (0);
}
