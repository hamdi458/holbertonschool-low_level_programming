#include "holberton.h"
/**
 * _strlen - fun
 * @s: var
 *
 * Return:length of s
 */
int _strlen(char *s)
{
int i, som;
som = 0;
for (i = 0; s[i] != '\0'; i++)
som + +;
return (som);
}
