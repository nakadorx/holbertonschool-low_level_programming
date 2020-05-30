#include "hash_tables.h"

/**
 * hash_djb2 - holberto,j
 * @str: the key
 * Return: the pre_index of the key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int x;
	int y;

	x = 5381;
	while ((y = *str++))
	{
		x = y + ((x << 5) + x) + y;
	}
	return (x);
}
