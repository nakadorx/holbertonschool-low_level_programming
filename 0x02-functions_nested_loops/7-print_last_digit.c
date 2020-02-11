#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 *  @n : char to check
 * Return: Always 0.
 */

int print_last_digit(int n)
{
if (n >= 0)
{
_putchar(n % 10);
return (n % 10);
}
else
{
_putchar((n * -1) % 10 + '0');
return ((n * -1) % 10);
}
}

