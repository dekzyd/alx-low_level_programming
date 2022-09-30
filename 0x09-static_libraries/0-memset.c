#include <stdio.h>

/**
 * _memset - fills the first n bytes of mem area pointed to by s with byte b
 * @s: memory area to be filled
 * @b: char to fill memory area with
 * @n: size of string
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
