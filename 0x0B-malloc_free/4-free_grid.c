#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array.
 * @grid: The 2D array to be freed.
 * @height: The height of the grid.
 *
 * Description: This function frees the memory allocated for a 2D array.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}

	free(grid);
}
