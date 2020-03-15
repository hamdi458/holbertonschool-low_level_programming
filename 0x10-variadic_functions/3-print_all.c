#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - variadic fun
 * @format: var
 *return: ALways 0
 */
void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *ch;
va_list ap;
va_start(ap, format);
while (format == NULL)
{
printf("\n");
return;
break;
}
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(ap, int));
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 's':
ch = va_arg(ap, char*);
if (ch == NULL)
{
printf("(nil)");
break;
}
printf("%s", ch);
break;
}
if ((format[i + 1] != '\0') &&
(format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
printf(", ");
i++;
}
va_end(ap);
printf("\n");
}
