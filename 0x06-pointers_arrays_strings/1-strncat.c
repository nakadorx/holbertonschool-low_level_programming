
#include "holberton.h"
/**
* *_strncat - check the code for Holberton School students.
* @dest : int
* @src : int
* @n : int
* Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, x = 0;
while (dest[i] != '\0')
{
i++;
}
while (x < n )
{
dest[i] = src[x];
x++;
i++;
}
dest[i] = '\0';
return (dest);
}
