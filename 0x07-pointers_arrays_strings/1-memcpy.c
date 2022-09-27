#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies n bytes from mem area src to mem area dest
 *  @src: to be copied
 *  @dest: to be filled with src data
 *  @n: number of bytes to be coied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
