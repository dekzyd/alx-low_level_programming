#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: the function pointed to.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (*name = NULL)
		exit(1);
	(f)(name);
}
