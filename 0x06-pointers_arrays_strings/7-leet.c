#include <stdio.h>
#include <string.h>

/**
 * leet - transforms string into leet code.
 * @s: the string to be transformed
 *
 * Return: pointer to string
 */
char *leet(char *s)
{
	int i, ln;

	ln = strlen(s);
	for (i = 0; i < ln; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		else if (s[i] == 'E' || s[i] == 'e')
		{
			s[i] = '3';
		}
		else if (s[i] == 'O' || s[i] == 'o')
		{
			s[i] = '0';
		}
		else if (s[i] == 'L' || s[i] == 'l')
		{
			s[i] = '1';
		}
		else
		{
			if (s[i] == 'T' || s[i] == 't')
			{
				s[i] = '7';
			}
		}
	}
	return (s);
}
