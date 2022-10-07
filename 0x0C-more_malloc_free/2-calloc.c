#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - creates an array initialized to 0.
 * @size: size in bytes on nmemb
 * @nmemb: number of array elements
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
