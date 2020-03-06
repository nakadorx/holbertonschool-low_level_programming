#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _realloc - check the code for Holberton School students.
 * @ptr: int
 * @old_size: int
 * @new_size: int
 * Return: Always 0.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (ptr == NULL)
{
free(ptr);
ptr = malloc(new_size);
return (ptr);
}
else if (new_size == 0)
{
return (ptr);
}
else if (new_size == old_size)
return (ptr);
if (new_size > old_size)
return (ptr);
else
ptr = malloc(new_size);
free(ptr);
return (ptr);
}
