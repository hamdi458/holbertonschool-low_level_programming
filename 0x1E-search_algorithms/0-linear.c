#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - searches for a value in an array using Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: value to search for
 * Return: index of value , or -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
if (array == NULL)
return (-1);
while (i < size)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
i++;
}
return (-1);
}