#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: 1d array of argument names as strings.
 *
 * Return: 0 success, 1 error.
 */
int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
