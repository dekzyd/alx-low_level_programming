#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: The character to check
 *
 * Return: on success 1 failure 0
 */
int _isupper(int c)
{
	int count;

	for (count = 'A'; count <= 'Z'; count++)
	{
		if (count == c)
			return (1);
	}
	return (0);
}
