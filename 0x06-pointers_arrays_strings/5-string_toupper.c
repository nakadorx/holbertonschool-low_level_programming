#include "holberton.h"
/**
* string_toupper - check the code for Holberton School students.
* @x : char
* Return: Always 0.
*/
char *string_toupper(char *x)
{
int i = 0;
while (x[i - 1] != '\0')
{
if (!(x[i] >= 'A' && x[i] <= 'Z'))
{
x[i] = x[i] - 32;
}
i++;
}
return (x);
}
