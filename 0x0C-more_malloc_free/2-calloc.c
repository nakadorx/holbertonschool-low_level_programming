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
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *t;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
t = malloc(nmemb * size);
if (t == NULL)
{
free(t);
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
t[i] = 0;
return (t);
}
