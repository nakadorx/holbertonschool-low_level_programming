#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * free_grid - check the code for Holberton School students.
 * @grid: int
 * @height: int
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
int i = 0;
if (grid  == NULL || height <= 0)
return;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
