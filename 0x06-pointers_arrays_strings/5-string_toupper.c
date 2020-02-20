#include "holberton.h"
/**
 * string_toupper - upper
 * @c: chaine
 *
 * Return:0
 */
char *string_toupper(char *c)
{
int i = 0;
while (c[i] != '\0')
{
if (c[i] >= 'a' && c[i] <= 'z')
c[i] = c[i] - 32;
i++;
}
return (c);
}
