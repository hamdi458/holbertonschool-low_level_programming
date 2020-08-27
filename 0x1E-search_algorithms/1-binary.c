#include "search_algos.h"

/**
 * binary_search - searches for a value using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
size_t l = 0, r = size - 1, m, i;

if (array == NULL)
return (-1);
while (l <= r)
{
printf("Searching in array: ");
i = l;
while (i < r)
{
printf("%d, ", array[i]);
i++;
}
printf("%d\n", array[i]);
m = (l + r) / 2;
if (array[m] < value)
l = m + 1;
else if (array[m] > value)
r = m - 1;
else
return (m);
}
return (-1);
}
