#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copies the str from src to dest.
 * @src: string to be copied
 * @dest: copied str
 *
 * Return: returns char
 */
char *_strcpy(char *dest, char *src)
{
	int i, lent;

	lent = strlen(src);
	for (i = 0; i <= lent; i++)
	{
		*(dest + i) = *(src + i);
	}
return (dest);
}
