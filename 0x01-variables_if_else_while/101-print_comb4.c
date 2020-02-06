#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  int c;
  int x;
  int y;
  int z;
for (c = 12; c <= 789; c++)
{
int k = 0;
x = c / 100;
y = c % 100 / 10;
z = c % 10;
if(x != y && x != z && y != z)
{
if(z < y && z < x)
{
k = k + z * 100;
if(x < y)
k=k + x * 10 + y;
else
k=k + y * 10 + x;
} 

if(y < z && y < x) 
{
k = k + y * 100;
if(z < x)
k=k + z * 10 + x;
else
k=k + x * 10 + z ;
}

if(x < z && x < y)
{
k = k + x * 100;
if(z < y)
k=k + z * 10 + y;
else
k=k + y * 10 + z;                                                                                      
}
}
putchar(k / 100 + '0');
putchar(k % 100 / 10 + '0');
putchar(k % 10 + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
