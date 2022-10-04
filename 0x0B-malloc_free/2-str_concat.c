#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int i, j, ls1, ls2;

	if (s1 == NULL)
	{
		ls1 = 0;
	}
	else
	{
		ls1 = strlen(s1);
	}

	if (s2 == NULL)
	{
		ls2 = 0;
	}
	else
	{
		ls2 = strlen(s2);
	}

	cat = malloc((ls1 + ls2 + 1) * sizeof(char));
	if (cat == NULL)
	{
		return (NULL);
	}

	/*Loop through first string*/
	for (i = 0; i < ls1; i++)
	{
		cat[i] = s1[i];
	}

	/* loop through 2nd string*/
	for (j = 0; j < ls2; j++)
	{
		cat[ls1 + j] = s2[j];
	}
	return (cat);
}
