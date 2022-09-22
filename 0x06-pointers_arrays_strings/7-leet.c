#include <stdio.h>
#include <string.h>

/**
 * leet - transforms string into leet code.
 * @str: the string to be transformed
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	/* Declare dictionaries (arrays) of characters */
	int i;
	char lower_case[] = {'a', 'e', 'o', 't', 'l'};
	char upper_case[] = {'A', 'E', 'O', 'T', 'L'};
	char numbers[] = {4, 3, 0, 7, 1};
	char *encode = str;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == lower_case[i] || *str == upper_case[i])
			{
				*str = numbers[i] + '0';
			}
		}
		str++;
	}
	return (encode);
}
