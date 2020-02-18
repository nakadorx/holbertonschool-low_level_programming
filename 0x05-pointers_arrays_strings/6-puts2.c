#include "holberton.h"
/**
* puts2 - check the code for Holberton School students.
* @s : char
* Return: Always 0.
*/
void puts2(char *str)
{
int i , x = -1;
for (i = 0 ; str[i] != '\0' ; i++)
{
if (x < 0)
{
_putchar(str[i]);
}
x = x * -1;
}
_putchar('\n');
}