#include "holberton.h"
/**
* rev_string - check the code for Holberton School students.
* @a : char
* @n : char
* Return: Always 0.
*/

void reverse_array(int *a, int n)
{
int i = 0, x;
int m[509];
while ( i < n)
{
m[i] = a[i];
i++;
}
i--;
for (x = i  ; x >= 0  ; x--)
{
a[i - x] = m[x];
}
}
