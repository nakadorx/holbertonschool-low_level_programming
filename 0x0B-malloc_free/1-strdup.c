#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _strdup - check the code for Holberton School students.
 * @str: int
 * Return: Always 0.
 */
char *_strdup(char *str)
{
unsigned int i = 0, j = 0;
char *x;
if (str == NULL)
return (NULL);
while (str[i])
i++;
x = malloc(i *sizeof(char));
for (j = 0; j < i; j++)
{
x[j] = str[j];
}
return (x);
}
