#include "search_algos.h"

/**
 * linear_search - fun
 * @array: int
 * @size: int
 * @value: int
 *
 * Return: Always 0
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
