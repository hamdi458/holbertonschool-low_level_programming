#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - variadic fun
 *@n : var
 *@separator: var
 * Return: print all numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *ch;
va_start(ap, n);
for (i = 0; n > i; i++)
{
ch = va_arg(ap, char*);
if (ch == NULL)
printf("(nil)");
else
printf("%s", ch);
if ((i < n - 1) && (separator != NULL))
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
