#include <stdio.h>
#include "holberton.h"
/**
 * _strcmp - concatenates two strings.
 * @s1 : The pointer
 * @s2 : chaine
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int s;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] < s2[i])
return (s1[i] - s2[i]);
else if (s2[i] < s1[i])
return (s1[i] - s2[i]);
else
{
s = 0;
i++;
continue;
}
}
return (s);
}
