#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonals
 * @a: 2d array
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int prim_d = 0;
	int sec_d = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		prim_d += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sec_d += a[i];
		a -= size;
	}
	printf("%d, %d\n", prim_d, sec_d);
}
