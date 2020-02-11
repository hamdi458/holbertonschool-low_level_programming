#include <stdio.h>
#include "holberton.h"
/**
 * _isalpha - checks for alphabetic characters
 *
 * Return: 1 if c is a letter, 0 not alpha
 *
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
