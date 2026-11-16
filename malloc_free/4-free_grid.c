#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D grid
 * @grid: address of the 2D grid
 * @height: the height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == 0)
return;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
