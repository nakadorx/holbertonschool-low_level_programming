#include "holberton.h"
/**
 * pow_2 - check the code for Holberton School students.
 * @x : int
 * Return: Always 0.
 */
unsigned int pow_2(unsigned int x)
{
	unsigned int y = 1, i = 0;

	x -= 1;
	if (x == 0)
		return (1);
	for (; i <= x - 1; i++)
		y *= 2;
	return (y);
}
/**
 * binary_to_uint - check the code for Holberton School students.
 * @b : int
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, res = 0, i = 0;

	if (!b)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	while (b[i] != '\0')
	{
		if (b[i] == '1')
			res += pow_2(len);
		len--;
		i++;
	}
	return (res);
}
