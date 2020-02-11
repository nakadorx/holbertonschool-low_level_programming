#include "holberton.h"
/**
 * jack_bauer - Entry point
 * Return: Always 0 (success)
 */

void jack_bauer(void)
{
int h, m;
for (h = 0 ; h > 24 ; h++)
{
for (m = 0 ; m > 60 ; m++)
{
if (h < 10)
{
_putchar('0');
_putchar(h);
}
else
{
_putchar(h);
}
_putchar(':');
if (m < 10)
{
_putchar('0');
_putchar(m);
}
else
{
_putchar(m);
}
}
}
}
