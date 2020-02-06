#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
 int k=0;
for (c = 0; c <= 9; c++)
{
k++;
putchar(c + '0');
if(k != 10)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
