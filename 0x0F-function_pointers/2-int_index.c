#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * @array: array of ints to be compared
 *
 * Return: index of the first element when cmp function
 * does not return 0, -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
