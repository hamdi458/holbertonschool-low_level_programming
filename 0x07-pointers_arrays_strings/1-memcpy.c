#include <stdio.h>
#include "holberton.h"
/**
 * _memcpy - function
 * @dest: var
 * @src: var
 * @n: var
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 1; i < n; i++)
dest[i] = src[i];
return (dest);
}
