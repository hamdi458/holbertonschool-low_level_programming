#include <stdio.h>
#include "holberton.h"
/**
 * _strchr - fun
 * @s: var
 * @c: var
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
int i = 0;
for (i = 0; s[i] != '\0'; i++)
{
s++;
if (s[i] == c)
return (s);
}
return (0);
}
