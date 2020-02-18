#include "holberton.h"
/**
* print_rev - check the code for Holberton School students.
* @s : char
* Return: Always 0.
*/

void print_rev(char *s)
{
int i;
for (i = _strlen(s) ; i >= 0 ; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
