#include <stdio.h>
#include <string.h>

/**
 * cap_string - capitalizes all words in string
 * @str: string to be worked on
 *
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int i, capitalize = 1;

	char word_sep[] = " \t\n,.!?\"{}()";

	/* capitalize is true, so all the first chars are capitalized */
	while (*str)
	{
		if (capitalize && *str >= 'a' && *str <= 'z')
		{
			*str = (*str - 'a') + 'A';
		}
		capitalize = 0;

		for (i = 0; i < 12; i++)
		{
			if (*str == word_sep[i])
				capitalize = 1;
		}
		str++;
	}
	return (ptr);
}
