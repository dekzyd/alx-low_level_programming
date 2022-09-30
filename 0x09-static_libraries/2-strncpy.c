#include <stdio.h>

/**
 * _strncpy - copies two strings
 * @dest: first string to be copied
 * @src: string to be copied
 * @n: number of bytes from src to be copied.
 *
 * Return: returns pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
/* if chars copied is < n, this adds \0 to the end */
	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
