
#include <stdio.h>
#include "holberton.h"
/**
 * _strcat - concatenates two strings.
 * @dest : The pointer
 * @src : chaine
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
  int j = 0;
  int i = 0;
  while (dest[i] != '\0')
    {
      i++;
    }
  j = i;
  i = 0;
  while (src[i] != '\0')
    {
      dest[j] = src[i];
      i++;
      j++;
    }
  dest[j + 1] = '\0';
  return (dest);
}
