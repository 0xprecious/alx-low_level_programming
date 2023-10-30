#include "main.h"
#include <stdlib.h>
/**
  * free_grid - free grid
  * @grid: grid
  * @height: height
  *
  * Return: void.
  */
void free_grid(int **grid, int height)
{
	int indx;

	for (indx = 0; indx < height; indx++)
	{
		free(grid[indx]);
	}
	free(grid);
}
