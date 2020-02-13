#include "holberton.h"
/**
* print_triangle - check the code for Holberton School students.
* @size : int
* Return: Always 0.
*/

void print_triangle(int size)
{
int x, y;
if (n > 0)
{
for (x = 0 ; x < n ; x++)
{
for (y = 0 ; y < n ; y++)
{
if (y < n - x - 1)
{
putchar('-');
}
else
{
putchar('#');
}
}
putchar('\n');
}
}
else
{
putchar('\n');
}
}
