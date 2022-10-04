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
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/*allocate mem to ptr*/
	ptr = malloc(height * sizeof(*ptr));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*allocate mem for ptr[i] i.e rows*/
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(**ptr));
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
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
