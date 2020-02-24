#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 * @s: int
 * @accept: int
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j = 0;
while (s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
break;
}
j++;
}
if (accept[j] == '\0')
break;
j = 0;
i++;
}
return (i);
}
