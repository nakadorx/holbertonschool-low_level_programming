#include "holberton.h"
/**
* rot13 - check the code for Holberton School students.
* @x : char
* Return: Always 0.
*/


char *rot13(char *x)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char r[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; x[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (a[j] == x[i])
{
x[i] = r[j];
break;
}
}
}
return (x);
}
