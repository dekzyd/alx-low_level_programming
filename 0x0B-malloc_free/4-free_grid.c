#include <stdlib.h>

/**
 * free_grid - frees allocated memory
 * @grid: the 2d array to be freed
 * @height: the height of the array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
