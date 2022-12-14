#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array initialized with a char
 * @c: Character to initialize array with.
 * @size: the size of the array to be created
 *
 * Return: pointer to 1st char in array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
