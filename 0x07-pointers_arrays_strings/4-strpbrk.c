#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *  @s: string to check
 *  @accept: string to check
 *
 *  Return: pointer to byte in s, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int slen = strlen(s);
	unsigned int alen = strlen(accept);
	unsigned int i, j;

	for (i = 0; i < slen; i++)
	{
		for (j = 0; j < alen; j++)
		{
			if (accept[j] == s[i])
			{
				s = s + i;
				return ((char *) s);
			}
		}
	}
	return (NULL);
}
