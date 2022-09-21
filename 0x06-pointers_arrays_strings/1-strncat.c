#include <stdio.h>

/**
 * _strncat - concatenates two strings 
 * @dest: first string to be copied
 * @src: string to be copied
 * @n: number of bytes from src to be copied.
 *
 * Return: returns pointer to dest.
 */
char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	int i = 0;
	int j = 0;

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
