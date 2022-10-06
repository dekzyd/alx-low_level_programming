#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates n chars from s2 to s1
 * @s1: string to be concatenated to
 * @s2: string whose first n bytes are concatenated
 * @n: the number of bytes to copy from s2.
 *
 * Return: pointer to concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1l = strlen(s1);

	str = malloc(sizeof(char) * (s1l + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
