#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * alloc_grid - check the code for Holberton School students.
 * @width: int
 * @height: int
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
int i = 0, j = 0;
int **M;
if (width <= 0 || height <= 0)
return (NULL);
M = (int **)malloc(sizeof(int *) * height + 1);
if (M == NULL)
return (NULL);
while (i < height)
{
M[i] = (int *)malloc(sizeof(int) * width);
while (j < width)
{
*(M + i * height + j + 1) = 0;
j++;
}
i++;
}
return (M);
}
