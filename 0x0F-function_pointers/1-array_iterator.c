#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - check the code for Holberton School students.
 * @array: int
 * @size: int
 * @action: int
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (array && action)
{
while (i < size)
action(array[i]);
i++;
}
}
