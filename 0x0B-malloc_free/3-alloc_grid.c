#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to array.
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	int **ptr, i, j;
	/*allocate mem to ptr*/
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	/*allocate mem for ptr[i] i.e rows*/
	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
	}
	/* fill values */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);

}