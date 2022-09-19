#include "main.h"

/**
 * rev_string - reverses a string
 * @str: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *str)
{
	int i, temp;
	int j, ln;
	/* calc length of string */
	ln = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		ln++;
	}

	/* reverse string */
	for (j = 0; j < ln / 2; j++)
	{
		temp = *(str + j);
		*(str + j) = *(str + ln - j - 1);
		*(str + ln - j - 1) = temp;
	}
}
