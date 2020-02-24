#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 * @s: int
 * @c: int
 *
 * Return: Always 0.
 */


char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return (0);
}
