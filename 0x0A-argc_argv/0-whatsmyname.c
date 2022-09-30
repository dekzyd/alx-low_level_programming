#include <stdio.h>

/**
 * main - prints name of file using argv
 * @argv: argument vector containing strings
 * @argc: argument count
 *
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
