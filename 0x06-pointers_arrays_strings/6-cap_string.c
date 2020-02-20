#include "holberton.h"
/**
* cap_string - check the code for Holberton School students.
* @x : char
* Return: Always 0.
*/

char *cap_string(char *x)
{
int j, i = 0;
char t[] = " \t\n,;.!?\"(){}";
if (x[i] >= 'a' && x[i] <= 'z')
{
x[i] -= 32;
}
while (x[i] != '\0')
{
for (j = 0 ; t[j] != '\0' ; j++)
{
if (x[i] == t[j])
{
if (x[i + 1] >= 'a' && x[i + 1] <= 'z')
{
x[i + 1] -= 32;
}
}
}
i++;
}
return (x);
}
