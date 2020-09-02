#include "search_algos.h"

/**
 * binary_search - fun
 * @array: int
 * @size: int
 * @value: int
 *
 * Return: Always 0
 */
int binary_search(int *array, size_t size, int value)
{
	size_t a = 0, mid;
	size_t b = size - 1;

	if (!array)
		return (-1);
	while (b >= a)
	{
		printf("Searching in array: ");
		for (mid = a; mid < b; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);
		mid = (a + b) / 2;
		if (array[mid] < value)
			a = mid + 1;
		else if (array[mid] > value)
			b = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
