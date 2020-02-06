#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c;
int k = 0;
for (c = 0; c <= 99; c++)
{
k++;
if (c < c % 10 * 10 + c / 10)
{
putchar(c / 10 + '0');
putchar(c % 10 + '0');
if (k < 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}











