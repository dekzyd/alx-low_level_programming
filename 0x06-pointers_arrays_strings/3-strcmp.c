#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first pointer to string to be compared
 * @s2: Second pointer to string to be compared
 *
 * Return: returns pointer to dest.
 */
int _strcmp(char *s1, char *s2)
{
	int k, larger;

	/* strlen function returns the length of argument string passed */
	if (strlen(s1) < strlen(s2))
		larger = strlen(s2);
	else
		larger = strlen(s1);
	/* loops 'larger' times */
	for (k = 0; k < larger; k++)
	{
		/* if ascii values of characters s1[i], s2[i] are equal do nothing */
		if (*(s1 + k) == *(s2 + k))
		{}
		else
			return (*(s1 + k) - *(s2 + k));
	};
	return (0);
}
