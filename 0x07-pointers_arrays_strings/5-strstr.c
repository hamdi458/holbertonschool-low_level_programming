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
char *h = haystack;
char *i = needle;
while (*haystack && *i && *haystack == *i)
{
haystack++;
i++;
}
if (!*i)
return (h);
haystack = h + 1;
}
return (0);
}
