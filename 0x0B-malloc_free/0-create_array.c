#include <stdio.h>

/**
 * create_array - creates array initialized with a char
 * @c: Character to initialize array with
 *
 * Return: pointer to 1st char in array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size <= 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return ptr;
}
