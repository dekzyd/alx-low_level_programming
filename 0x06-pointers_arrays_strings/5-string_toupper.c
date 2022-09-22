#include <stdio.h>
#include <string.h>

/**
 * string_toupper - changes lowercase chars to uppercase chars
 * @s: the string to be checked and converted
 * @ln: string length
 *
 * Return: pointer to modified string
 */
char *string_toupper(char *s)
{
	int i, ln;

	ln = strlen(s);
	for (i = 0; i < ln; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
