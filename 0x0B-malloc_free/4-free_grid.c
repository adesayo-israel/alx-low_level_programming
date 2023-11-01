#include <stdlib.h>

/**
 * free_grid -  frees up 2d array grid
 *
 * @grid: this represents the 2d double pointer grid
 * @height: represents th height of the  grid
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}

