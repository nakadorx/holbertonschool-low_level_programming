#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * create_array - check the code for Holberton School students.
 * @c: int
 * @size: int
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *t;

if (size == 0)
return (NULL);
t = malloc(size * sizeof(char));
if (t == NULL)
return (NULL);
for (i = 0; i < size; i++)
t[i] = c;
return (t);
}
