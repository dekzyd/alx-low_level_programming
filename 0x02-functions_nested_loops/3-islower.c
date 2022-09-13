#include "main.h"

/**
 * _islower - checks if argument isin lowercase
 *@c The character to check
 * Return: Success (1) Failure(0).
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		};
	};
	return (0);
}
