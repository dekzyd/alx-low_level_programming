#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chess board
 * @a: 2d array to be printed
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int m = 0;
	int n = 0;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
		{
			printf("%c", a[m][n]);

			if (n == 7)
			{
				putchar(10);
			}
		}
	}
}
