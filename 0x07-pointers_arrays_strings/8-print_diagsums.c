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
     int i = 0, j = 0,x = 0, y = 0, p = 0;
    while (i <= size)
    {
        while ( j <= size)
        {
            x = x + a[i][j];
            p = size - i + 1;
            y = y + a[i][p];
            j++;
        }
        i++;
    }
    printf("%d, %d\n", x, y);
}