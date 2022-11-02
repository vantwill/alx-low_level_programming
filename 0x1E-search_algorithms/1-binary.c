#include "search_algos.h"

/**
 * binary_search - searches 
 * the Binary search algorithm
 * @array: pointer to 
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t j, k, m, r;
	
	k = 0;
	r = size - 1;
	if (!array)
		return (-1);
	while (k <= r)
	{
		m = (k + r) / 2;
		printf("Searching in array:");
		for (j = k; j <= r; j++)
		{
			if (j != r)
				printf(" %d,", array[j]);
			else
				printf(" %d\n", array[j]);
		}
		if (array[m] < value)
			k = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
