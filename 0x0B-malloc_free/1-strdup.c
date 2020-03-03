#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - fun
 * @str: var size of array
 *
 * Return: 0
 */

char *_strdup(char *str)
{
char *ar;
int i = 0;
int j;
while (str[i])
i++;
i++;
ar = malloc(i);
if (str == NULL || ar == NULL)
return (NULL);
for (j = 0; j < i; j++)
{
ar[j] = str[j];
}
return (ar);
}
