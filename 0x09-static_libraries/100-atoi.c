#include "holberton.h"
/**
* _atoi - check the code for Holberton School students.
* @s: int
* Return: Always 0.
*/
int _atoi(char *s)
{
int sgn = 1, i = 1, x = 0;
if (*s == '-')
{
sgn *= -1;
}
while (*(s + i) > '0' && *(s + i) < '9' && *(s + i) != '\0')
{
x = (x * 10)  + sgn * (*(s + i) - '0');
i++;
}
return (x);
}
