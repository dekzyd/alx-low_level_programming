#include "main.h"

/**
 * _isalpha - checks if argument is an aplhabet
 *@c: The character to check
 *
 * Return: Success (1) Failure(0).
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	};
return (0);
}
