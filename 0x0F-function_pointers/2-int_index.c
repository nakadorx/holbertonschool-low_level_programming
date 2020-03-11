#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - check the code for Holberton School students.
 * @array: int
 * @size: int
 * @cmp: int
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array && cmp)
{
if (size <= 0)
return (-1);
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
}
return (-1);
}
