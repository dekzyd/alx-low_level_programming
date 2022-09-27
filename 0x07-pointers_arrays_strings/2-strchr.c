#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: string to be scanned
 * @c: character to be checked
 *
 * Return: pointer to s or Null.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	return (NULL);
}
