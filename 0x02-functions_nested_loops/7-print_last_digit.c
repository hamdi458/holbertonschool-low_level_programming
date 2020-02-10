#include "holberton.h"
/**
 * print_last_digit - checks for alphabetic characters
 * @c: Variable containing the letter to be checked
 *
 * Return: 1 if c is a letter, 0 not alpha
 *
 */
int print_last_digit(int c)
{
int k;
k = c % 10;
if (k < 0)
k = -k;
_putchar(k + '0');
return (k);
}
