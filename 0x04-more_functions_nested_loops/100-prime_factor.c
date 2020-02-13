#include <stdio.h>
#include <math.h>
/**
 * main - calcul prime factor of number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
long n = 612852475143;
long i;
while (n % 2 == 0)
{
printf("2 ");
n = n / 2;
}
for (i = 3; i <= sqrt(n); i++)
while (n % i == 0)
{
printf("%li ", i);
n = n / i;
}
printf("%li\n", n);
return (0);
}
