#include <stdlib.h>

/**
 * argstostr - concatenates arguments to string
 * @ac: argument count
 * @av: argument list
 *
 * Return: pointer to concatenated string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, ln, f;

	ln = 0;
	f = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*get length of all args. for each arg passed */
	for (a = 0; a < ac; a++)
	{	/* loop through each char and add 1 to length ln*/
		for (b = 0; av[a][b] != '\0'; b++)
		{
			ln++;
		}
		/* Add one to compensate \0 char*/
		ln++;
	}

	str = malloc(sizeof(char) * ln + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/* loop through each arg and assign each char to */
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[f] = av[a][b];
			f++;
		}
		str[f++] = '\n';
	}
	str[f] = '\0';

	return (str);

}
