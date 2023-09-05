#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: 2d grid
 * @height: height dimension of grid to be determined
 * Description: frees memory of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
	{
		free(grid[z]);
	}
	free(grid);
}
