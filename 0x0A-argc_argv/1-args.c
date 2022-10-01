#include <stdio.h>

/**
 * main - prints number of args passed into it.
 * @argc: argument count
 * @argv: argument vector that contains strings of args
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int count;

	count = argc - 1;
	printf("%d\n", count);
	return (0);
}
