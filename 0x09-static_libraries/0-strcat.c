
#include "holberton.h"
/**
* *_strcat - check the code for Holberton School students.
* @dest : int
* @src : int
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
int i = 0, x = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[x] != '\0')
{
dest[i] = src[x];
x++;
i++;
}
dest[i] = '\0';
return (dest);
}
