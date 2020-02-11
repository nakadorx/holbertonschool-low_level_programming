#include "holberton.h"
/**
 * times_table - Entry point
 * Return: Always 0 (success)
 */

void times_table(void)
{
int x, y;
for (x = 0 ; x <= 9 ; x++)
{
for (y = 0 ; y <= 9 ; y++)
{
if (x * y < 10)
{
_putchar(x * y + '0');
if (y != 9)
{
_putchar(',');
_putchar(' ');
if (x * (y + 1) < 10)
{
_putchar(' ');
}
}
}
else
{
_putchar(x * y / 10 + '0');
_putchar(x * y % 10 + '0');
if (y != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
