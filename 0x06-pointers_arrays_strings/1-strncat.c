#include <stdio.h>
#include "holberton.h"
/**
 * _strncat - concatenates two strings.
 * @dest : The pointer
 * @src : chaine
 * @n : number of char
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int j = 0;
int i = 0;
n = n - 1;
while (dest[i] != '\0')
{
i++;
}
j = i;
i = 0;
while (src[i] != '\0' && i <= n)
{
dest[j] = src[i];
i++;
j++;
}
dest[j + 1] = '\0';
return (dest);
}
