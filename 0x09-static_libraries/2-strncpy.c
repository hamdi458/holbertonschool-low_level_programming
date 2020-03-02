
#include <stdio.h>
#include "holberton.h"
/**
 * _strncpy - concatenates two strings.
 * @dest : The pointer
 * @src : chaine
 * @n : variable
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
  int i = 0;
  while (src[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i++;
    }
  for (; i < n; i++)
    dest[i] = '\0';
  return (dest);
}
