#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check the lettre.
 * @c: Variable containing the letter
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
