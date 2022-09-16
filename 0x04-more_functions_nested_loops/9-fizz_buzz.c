#include <stdio.h>

/**
 * main - prints FizzBuzz, Fizz, Buzz or the number.
 *
 * Return: success 0
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if ((c % 5 == 0) && (c % 3 == 0))
			printf("FizzBuzz");
			if (c < 100)
				putchar(' ');
		else if (c % 5 == 0)
			printf("Buzz");
			if (c < 100)
				putchar(' ');
		else if (c % 3 == 0)
			printf("Fizz");
			if (c < 100)
				putchar(' ');
		else
			printf("%d ", c);
			if (c < 100)
				putchar(' ');
	}
	putchar('\n');
	return (0);
}
