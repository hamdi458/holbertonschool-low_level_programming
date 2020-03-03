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
int j = 0;
while(str[i])
i++;
if(i == 0)
return("null");
ar = malloc(i * sizeof(char));
for (j = 0; j < i; j++)
{
ar[j] = str[j];
}
return (ar);
}
