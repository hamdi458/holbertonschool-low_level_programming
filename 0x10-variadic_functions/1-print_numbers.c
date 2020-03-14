#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - variadic fun
 *@n : var
 *@separator: var
 * Return: print all numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; n > i; i++)
{
printf("%d", va_arg(ap, int));
if (i < n - 1 && peparator != NULL)
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
