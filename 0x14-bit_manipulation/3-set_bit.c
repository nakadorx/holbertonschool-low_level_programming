#include "holberton.h"
/**
 * set_bit - check the code for Holberton School students.
 * @n : int
 * @index : int
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);
	x = 1 << index;
	*n = (*n | x);
	return (1);
}
