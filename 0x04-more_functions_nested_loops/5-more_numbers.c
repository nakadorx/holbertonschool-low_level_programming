#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 * Return: Always 0.
 */

void more_numbers(void)
{
int i, x;
for (x = 0; x < 10 ; x++)
{
for (i = 0; i < 15 ; i++)
{
if (i > 9)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
