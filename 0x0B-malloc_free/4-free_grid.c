#include "main.h"
#include <stdlib.h>

/**
 *free_grid-frees a 2d grid made by alloc_grid
 *@grid:the multidimension array
 *@height:height of the grid
 *
 *Return:nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
