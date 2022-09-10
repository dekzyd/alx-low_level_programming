#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar((c % 10) + '0');
		if (c == 9)
			continue;
		putchar(',');
		putchar(' ');
	};	
	putchar('\n');

	return (0);
}
