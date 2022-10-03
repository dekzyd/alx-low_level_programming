#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns duplicate to string
 * @str: string to be copied
 *
 * Return: pointer to duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str);
	dup = malloc(size * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
