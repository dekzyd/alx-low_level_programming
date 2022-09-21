#include <stdio.h>

/**
 * _strcmp - compares two strings 
 * @dest: first string to be copied
 * @src: string to be copied
 * @n: number of bytes from src to be copied.
 *
 * Return: returns pointer to dest.
 */
char *_strcmp(char *s1, char *s2)
{
	int i, j, k, larger;

	int i = strlen(s1);
	int j = strlen(s2);
	/* strlen function returns the length of argument string passed */
	if (i < j)
		larger = j;
	else
		larger = i;
	/* loops 'larger' times */
	for (k = 0; k < larger; k++)
	{
		/* if ascii values of characters s1[i], s2[i] are equal do nothing */
		if (*(s1 + k) == *(s2 + k))
		{}
		else
			return *(s1 + k) - *(s2 + k)
	}
	return (0)
}









	return (0);
}
