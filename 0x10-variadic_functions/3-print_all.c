#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - variadic fun
 * @format: var
 *return: ALways 0
 */
void print_all(const char * const format, ...)
{
unsigned  int i ;
char *s;
va_list ap;
va_start(ap, format);
if (format == NULL)
return;
i = 0;
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c", (char) va_arg(ap, int));
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", (float) va_arg(ap, double));
break;
case 's':
s = va_arg(ap, char *);
if (s == NULL)
{
printf("(nil)");
break;
}
printf("%s", s);
break;
}
while ((i < strlen(format)-1) && (format[i] == 'c'
|| format[i] == 'i' || format[i] == 'f'|| format[i] == 's'))
printf(", ");
i++;
}
va_end(ap);
printf("\n");
}
