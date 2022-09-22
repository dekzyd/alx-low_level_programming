#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: first string to be copied
 * @src: string to be copied
 * @n: number of bytes from src to be copied.
 *
 * Return: returns pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (j < n && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
