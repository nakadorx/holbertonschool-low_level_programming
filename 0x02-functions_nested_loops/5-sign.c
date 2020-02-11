#include "holberton.h"
/**
 * print_sign - check the code for Holberton School students.
 *  @n : char to check
 * Return: Always 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
