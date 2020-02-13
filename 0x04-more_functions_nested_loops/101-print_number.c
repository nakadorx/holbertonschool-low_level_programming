#include "holberton.h"
/**
* print_number - check the code for Holberton School students.
* @n : int
* Return: Always 0.
*/

void print_number(int n)
{
int x = 9, y = 90, v = 1, i, j, z = 1, a, t;
if (n < 0)
{
n = n * -1;
_putchar('-');
}
if (n > 99999999)
{
t = n / 1000000000;
_putchar(t + '0');
n = n % 1000000000;
}
while (x < n)
{
x = x + y;
y = y * 10;
v = v + 1;
}
for (j = 1 ; j < v ; j++)
z = z * 10;
for (i = 0; i < v; i++)
{
a = n / z;
n = n - (a *z);
z = z / 10;
_putchar(a + '0');
}
}
