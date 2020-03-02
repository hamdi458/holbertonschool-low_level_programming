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
  while (*s++)
    {
      if (*s == c)
	{
	  return (s);
	}
    }
  return (0);
}
