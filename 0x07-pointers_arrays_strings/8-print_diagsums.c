#include <stdio.h>
#include "holberton.h"
/**
 *print_diagsums - func
 *@a: var
 *@size :var
 *Return:0
 */
void print_diagsums(int *a, int size)
{
int i, j, s = 0, s1 = 0;
for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
{
if (i == j)
s += *a;
if ((i + j) == (size - 1))
s1 += *a;
a += 1;
}
}
printf("%d, %d\n", s, s1);
}
