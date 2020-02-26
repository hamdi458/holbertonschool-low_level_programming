#include <stdio.h>
#include "holberton.h"

/**
 * sqrt_ - fun
 * @x: var
 * @y: var
 *
 * Return: 0
 */

int sqrt_(int x, int y)
{
if (x > y)
return (-1);
if ((x * x) == y)
return (x);
else
return (sqrt_(++x, y));
}

/**
 * _sqrt_recursion - fun
 * @n:var
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (-1);
return (sqrt_(1, n));
}
