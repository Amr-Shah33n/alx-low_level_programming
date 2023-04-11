#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory of input grid
 * @grid: input array
 * @height: height of input array
 * Return: void return
 **/
void free_grid(int** grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i++]);
	}
	free(grid);
}
