#include <stdio.h>
/**
 * linear_search - searches for a value in an array using Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: value to search for
 * Return: index of value, or -1
 */
int linear_search(int *array, size_t size, int value)
{
    int i = 0;
    if (array == NULL)
        return (-1)
    while (i < size)
    {
        printf("Value checked array[%lu] = [%d]", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}