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
	char *g;
	int a, b, c, d, e, f;

	c = 0;
	f = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*get length of all args. for each arg passed */
	for (a = 0; a < ac; a++)
	{	/* loop through each char and add 1 to length c*/
		for (b = 0; av[a][b] != '\0'; b++)
		{
			c++;
		}
		/* Add one to compensate \0 char*/
		c++;
	}

	g = malloc(sizeof(char) * c + 1);
	if (g == NULL)
	{
		return (NULL);
	}
	/* loop through each arg and assign each char to */
	for (d = 0; d < ac; d++)
	{
		for (e = 0; av[d][e] != '\0'; e++)
		{
			g[f] = av[d][e];
			f++;
		}
		g[f++] = '\n';
	}
	g[f] = '\0';

	return (g);

}
