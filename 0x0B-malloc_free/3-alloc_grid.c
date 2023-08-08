#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid-returns a pointer to a 2d array of ints
 *@width:width of array
 *@height:height of array
 *
 *Return:negative if 0 else NULL
 */
int **alloc_grid(int width, int height)
{
	int **mygrid;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	mygrid = malloc(height * sizeof(int *));
	if (mygrid == NULL)
	{
		free(mygrid);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		mygrid[a] = malloc(width * sizeof(int));
		if (mygrid[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(mygrid[a]);
			free(mygrid);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			mygrid[a][b] = 0;

	return (mygrid);
}
