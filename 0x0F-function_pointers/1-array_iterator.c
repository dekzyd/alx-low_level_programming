#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - calls a function with a given arg from an array
 * @array: an array of args
 * @size: size of array
 * @action: the function that will take the args in the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(action)(array[i]);
		}
	}
}
