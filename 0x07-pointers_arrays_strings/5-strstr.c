#include <stdio.h>

/**
 * _strstr -  finds the first occurrence of needle in the string haystack
 * @haystack: string scanned
 * @needle: string used to check
 *
 * Return: pointer to haystack or null
 */
char *_strstr(char *haystack, char *needle)
{
	const char *a, *b = needle;

	if (!*b)
	{
		return ((char *) haystack);
	}
	for ( ; *haystack ; haystack++)
	{
		if (*haystack != *b)
		{
			continue;
		}
		a = haystack;
		for (;;)
		{
			if (!*b)
			{
				return ((char *) haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
	return (NULL);
}
