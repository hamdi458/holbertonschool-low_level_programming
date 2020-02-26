#include "holberton.h"
/**
 * _strlen_recursion - function
 * @s: var
 * Return: 0
 */
int _strlen_recursion(char *s)
{
int s1=0;
if (*s != '\0')
{
return (1 + _strlen_recursion(++s));
s1++;
}
else
return (s1);
}

