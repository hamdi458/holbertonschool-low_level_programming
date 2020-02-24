#include "holberton.h"

/**
 * _strstr - Function
 * @haystack: var
 * @needle: var
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
while (*haystack && *needle && *haystack == *needle)
{
haystack++;
needle++;
}
if (!*needle)
return (haystack);
haystack++;
}
return (0);
}
