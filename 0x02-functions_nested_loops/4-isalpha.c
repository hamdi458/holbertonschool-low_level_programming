#include <stdio.h>
#include "holberton.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: Variable containing the letter to be checked
 *
 * Return: 1 if c is a letter, 0 not alpha
 *
 */
int _isalpha(int)
{
int c = ch;
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
