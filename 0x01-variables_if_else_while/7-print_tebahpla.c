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

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');

	return (0);
}
