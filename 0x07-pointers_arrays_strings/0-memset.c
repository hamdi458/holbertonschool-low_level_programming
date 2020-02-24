B#include <stdio.h>
#include "holberton.h"
/**
 * _memset - function
 * @s: var
 * @b: var
 * @n: var
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
