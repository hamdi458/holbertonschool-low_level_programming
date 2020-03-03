#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - fun
 * @grid: The grid var
 * @height: The var
 */

void free_grid(int **grid, int height)
{
if (grid == NULL)
return;
while (height > 0)
{
height--;
free(grid[height]);
}
free(grid);
}
