#include "holberton.h"
/**
* _puts - check the code for Holberton School students.
* @str : char
* Return: Always 0.
*/
void _puts(char *str)
{
int i;
for (i = 0 ; i <= _strlen(str) ; i++)
{
_putchar(str[i]);
}
}
