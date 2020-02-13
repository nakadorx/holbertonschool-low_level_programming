#include "holberton.h"
/**
* print_diagonal - check the code for Holberton School students.
* @n : int
* Return: Always 0.
*/

void print_diagonal(int n)
{
int i, x;
if (n < 0)
{
for (x = 0 ; x <= n ; x++)
{
for (i = 0 ; i <= x ; i++)
{
if (i != 0)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
}
}
