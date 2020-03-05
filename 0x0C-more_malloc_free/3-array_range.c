#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * array_range - check the code for Holberton School students.
 * @min: int
 * @max: int
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
int i = 0, x;
int *t;

if (min > max)
return (NULL);
x = max - min + 1;
t = malloc(sizeof(int) * x);
if (t == NULL)
{
free(t);
return (NULL);
}
for (; i < x; i++, min++)
t[i] = min;
return (t);
}
