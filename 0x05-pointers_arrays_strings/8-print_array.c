#include <stdio.h>

/**
 * print_array - prints n number of array items.
 * @n: Number of array items to print
 * @a: The array to be read
 *
 * return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", *(a + i));
		else if (n < 0)
			putchar('\n');
		else
			printf("%d, ", *(a + i));
	}

}
