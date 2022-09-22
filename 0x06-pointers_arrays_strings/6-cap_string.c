#include <stdio.h>
#include <string.h>

/**
 * cap_string - capitalizes all words in string
 * @s: string to be worked on
 *
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i, j, ln;

	ln = strlen(s);
	for (j = 0; j < ln; j++)
	{
		if (s[j] >= 'A' && s[j] <= 'Z')
		{
			s[j] = s[j] + 32;
		}
	}

	for (i = 0; i < ln; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		switch (s[i])
		{
			case '\n':
			case '\t':
			case ' ':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				++i;
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
					continue;
				}
				else if (s[i] >= 'A' && s[i] <= 'Z')
				{
					continue;
				}
				else
				{
					++i;
					if (s[i] >= 'a' && s[i] <= 'z')
					{
						s[i] = s[i] - 32;
					}
				}
		}
	}
	return (s);
}
