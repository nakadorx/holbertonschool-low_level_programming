#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * str_concat - check the code for Holberton School students.
 * @s1: int
 * @s2: int
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, m;
char *x;
if (s1 == NULL)
i = 0;
else
{
while (s1[i])
i++;
}
if (s2 == NULL)
j = 0;
else
{
while (s2[j])
j++;
}
x = malloc((i + j + 1) * sizeof(char));
if (x == 0)
return (NULL);
for (m = 0; m < i; m++)
x[m] = s1[m];
for (m = 0; m < j; m++)
x[m + i] = s2[m];
x[i + j] = '\0';
return (x);
}
