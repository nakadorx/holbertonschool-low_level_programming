#include "holberton.h"
/**
 * _memset - check the code for Holberton School students.
 * @s: int
 * @b: int
 * @n: int
 *
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
