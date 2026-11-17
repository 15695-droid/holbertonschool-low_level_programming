#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - points to a 2 dimentional array
 * @width: first array
 * @height: array within elements of width
 *
 * Return: **grid
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == 0)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));

if (grid[i] == 0)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}

for (j = 0; j < width; j++)

grid[i][j] = 0;

}
return (grid);
}
