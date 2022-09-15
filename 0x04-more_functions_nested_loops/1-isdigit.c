#include "main.h"

/**
 * _isdigit - Checks if an argument is a digit or not
 * @c: The character to be checked.
 *
 * Return: on success 1 failure 0
 */
int _isdigit(int c)
{
	int count;

	for (count = '0'; count <= '9'; count++)
	{
		if (count == c)
			return (1);
	}

	for (count = 0; count <= 9; count++)
	{
		if (count == c)
			return (1)
	}

	return (0);
}
