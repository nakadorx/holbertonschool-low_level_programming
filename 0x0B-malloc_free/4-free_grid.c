#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - check the code for Holberton School students.
 * @grid: int
 * @height: int
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
int i;
if (grid != NULL && height <= 0)
{
for (i = 0; i < height ; i++)
free(grid[i]);
free(grid);
}
}
