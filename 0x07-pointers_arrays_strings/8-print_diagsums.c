#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - check the code for Holberton School students.
* @a: int
* @size : int
* Return: Always 0.
*/

void print_diagsums(int *a, int size)
{
int i = 0, x, y;
while (i < size)
{
x += *(a + (i * size + i));
y += *(a + (i * size) + ((size - i) + 1));
i++;
}
printf("%d, %d\n", x, y);
}
