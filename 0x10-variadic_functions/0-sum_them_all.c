#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - variadic fun
 *@n : var
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, s = 0;
if (n == 0)
return (0);
va_start(ap, n);
for (i = 0; n > i; i++)
s = s + va_arg(ap, int);
va_end(ap);
return (s);
}
