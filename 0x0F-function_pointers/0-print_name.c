#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: the function pointed to.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (*name != NULL)
	{
		(f)(name);
	}
}
