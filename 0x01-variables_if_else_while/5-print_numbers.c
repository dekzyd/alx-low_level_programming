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

	for (c = 0; c < 10; c++)
		printf("%d", c);
	putchar('\n');

	return (0);
}
