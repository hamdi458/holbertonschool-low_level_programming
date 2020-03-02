  
#include "holberton.h"
/**
 * _islower - check letter
 *
 * @c: Variable containing the letter to be checked
 * Return: Always 0.
 */
int _islower(int c)
{
  if (c >= 96 && c <= 123)
    return (1);
  else
    return (0);
}
