#include <stdio.h>
#include <string.h>

/**
 * _strspn -  gets the length of a prefix substring
 * @s: strings in s
 * @accept: to be checked.
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int slen = strlen(s);
	unsigned int alen = strlen(accept);
	unsigned int count = 0;

	for (i = 0; i < slen; i++)
	{
		unsigned int found_match = 0;

		for (j = 0; j < alen; j++)
		{
			if (accept[j] == s[i])
			{
				found_match = 1;
				break;
			}
		}
		if (!found_match)
		{
			break;
		}
		else
		{
			count++;
		}
	}
	return (count);
}
