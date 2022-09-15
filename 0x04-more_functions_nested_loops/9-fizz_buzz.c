#include "main.h"
#include <stdio.h>
/**
 * fizzbuzz - prints FizzBuzz, Fizz, Buzz or the number.
 *
 * Return: success 0
 */
int fizzbuzz(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if ((c % 5 == 0) && (c % 3 == 0))
			printf("FizzBuzz ");
		else if (c % 5 == 0)
			printf("Buzz ");
		else if (c % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", c);
	}
	return (0);
}
