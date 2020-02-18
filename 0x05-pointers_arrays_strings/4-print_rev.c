#include "holberton.h"
/**
* print_rev - check the code for Holberton School students.
* @s : char
* Return: Always 0.
*/

void print_rev(char *s)
{
int i, x;
while (s[i] != '\0')
{
i++;
}
for (x = i - 1 ; x >= 0 ; x--)
{
_putchar(s[x]);
}
_putchar('\n');
}
