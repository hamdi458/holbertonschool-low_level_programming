#include "holberton.h"
/**
 * reverse_array - reserve
 * @a: var
 * @n: var
 * Return: Always success
 */
void reverse_array(int *a, int n)
{
int aux, i;
for (i = 0; i <= n / 2; i++)
{
aux = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = aux;
}
}
