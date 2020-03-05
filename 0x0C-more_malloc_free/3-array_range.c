#include "holberton.h"
#include <stdlib.h>



/**
 **array_range - fun
 *@min: var
 *@max: var
 *
 *Return: string
 */
int *array_range(int min, int max)
{
int i, j;
int *ar;
if (min > max)
return (NULL);
ar = malloc((max - min + 1) * sizeof(int));
if (ar == NULL)
return (NULL);
for (i = 0, j = min; i < max - min + 1; i++, j++)
{
ar[i] = j;
}
return (ar);
}

