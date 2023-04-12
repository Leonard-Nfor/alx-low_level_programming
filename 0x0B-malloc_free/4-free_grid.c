#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free 2D grid
 * @height: height dimension
 * @grid: second grid
 * Discription: frees memory of grid
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
