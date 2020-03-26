#include "holberton.h"
/**
 * flip_bits - check the code for Holberton School students.
 * @n : int
 * @m : int
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0;
	while (n || m)
	{
		if ((n & 1) != (m & 1))
			x++;
		n >>= 1;
		m >>= 1;
	}
	return (x);
}
