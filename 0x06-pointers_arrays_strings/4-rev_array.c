#include "holberton.h"
/**
* rev_string - check the code for Holberton School students.
* @a : char
* @n : char
* Return: Always 0.
*/

void reverse_array(int *a, int n)
{
int  x;
for (x = n  ; x >= 0  ; x--)
{
a[n - x] = a[x];
}
}
