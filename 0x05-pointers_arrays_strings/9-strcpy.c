#include "holberton.h"
#include <stdio.h>
/**
* _strcpy - check the code for Holberton School students.
* @dest : int
* @src : int
* Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0 ; src[i] != '\0' ; i++)
{
dest[i] = src[i];
}
dest[i + 1] = '\0';
return (dest);
}
