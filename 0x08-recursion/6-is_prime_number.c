#include "holberton.h"
/**
 * pn - check the code for Holberton School students.
 * @i: int
 * @n: int
 * Return: Always 0.
 */
int pn(int i, int n)
{
if (x < 2)
return (0);
else if (i > x / 2)
return (1);
else
return (pn(i + 1, x));
}


/**
 * is_prime_number - check the code for Holberton School students.
 * @n: int
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (pn(2, n));
}
