#include <stdio.h>

/**
 * _strlen - returns length of a string
 * @s: the strings length to be read
 *
 * Return: success length of string
 */
int _strlen(char *s)
{
	/* l = 1 to cover up for '\0' char in string*/
	int l = 1;

	for (int i = 0; *(s + i) != '\0'; i++)
	{
		l++;
	}

	return (l);
}
