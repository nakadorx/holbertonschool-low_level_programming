#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _calloc - check the code for Holberton School students.
 * @_calloc: int
 * @size: int
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
