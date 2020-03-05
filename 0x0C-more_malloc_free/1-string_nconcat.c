#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: int
 * @s2: int
 * @n: int
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, x;
char *str;
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
if (j > n)
j = n;
str = malloc(sizeof(char) * (i + j + 1));
if (str == NULL)
return (NULL);
for (x = 0; x < i; x++)
str[x] = s1[x];
for (x = 0; x < j; x++)
str[x + i] = s2[x];
return (str);
}
