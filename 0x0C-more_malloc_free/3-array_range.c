#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * array_range - creates array with range from min to max.
 * @min: start of range
 * @max: end of range
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	char *ptr;
	unsigned int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
