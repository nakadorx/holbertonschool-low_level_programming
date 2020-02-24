#include "holberton.h"
/**
 * _memcpy - check the code for Holberton School students.
 * @dest: int
 * @src: int
 * @n: int
 *
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{   
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
