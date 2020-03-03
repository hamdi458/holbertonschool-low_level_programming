#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - fun
 * @width: var
 * @height: var
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
int **ar = NULL;
int j, i;
if (width <= 0 || height <= 0)
return (NULL);
ar = malloc(height * sizeof(int *));
if (ar == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
ar[i] = malloc(width * sizeof(int));
if (ar[i] == NULL)
{
for (j = 0; j < i; j++)
free(ar[j]);
free(ar);
return (NULL);
}
for (j = 0; j < width; j++)
ar[i][j] = 0;
}
return (ar);
}
