#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: binary number to be converted.
 * Return: converted num(success) or 0 on failure.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
