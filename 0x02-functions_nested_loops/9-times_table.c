#include <stdio.h>

int main()
{
	int tableSize = 9;
	int a;
	int i = 0;
	int j = 1;

	for (i = 0; i <= tableSize; i++)
	{
		putchar('0');
		for (j = 1; j <= tableSize; j++)
		{
			putchar(',');
			putchar(' ');

			a = i * j;
			if (a <= 9)
				putchar(' ');
			else
				putchar(((i * j) / 10) + '0');
				putchar(((i * j) % 10) + '0');
		}
		putchar('\n');
	}return (0);
}
