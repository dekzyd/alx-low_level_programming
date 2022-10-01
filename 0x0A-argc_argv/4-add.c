#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints sum of positive numbers
 * @argc: argument count
 * @argv: argument names
 *
 * Return: 1 failure, 0 success
 */
int main(int argc, char *argv[])
{
	int u = 0;
	int v = 0;
	int sum = 0;

	for (u = 1; u < argc; u++)
	{
		for (v = 0; argv[u][v]; v++)
		{
			if (isdigit(argv[u][v]) == 0)
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	for (u = 0; u < argc; u++)
	{
		sum += atoi(argv[u]);
	}
	printf("%d\n", sum);
	return (0);

}
