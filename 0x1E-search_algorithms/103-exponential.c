#include "search_algos.h"

int binarySearch(int *, size_t, size_t, int);
/**
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t j, lo;
	int index;

	if (array == NULL)
		return (-1);
	j = 1;
	while (j < size && array[j] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[i] == value)
			return (j);
		j *= 2;
	}
	lo = j / 2;
	if (j > size - 1)
		j = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", lo, j);
	index = binarySearch(array, lo, , value);
	return (index);
}

/**
 * binarySearch - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: leftmost element in the subarray
 * @high: rightmost element in the subarray
 * @value: value to search for
 * Return: first index where value is located or -1
 */
int binarySearch(int *array, size_t low, size_t high, int value)
{
	size_t j, midl;

	while (low <= high)
	{
		midl = (low + high) / 2;
		printf("Searching in array:");
		for (j = low; j <= high; j++)
		{
			if (j != high)
				printf(" %d,", array[j]);
			else
				printf(" %d\n", array[j]);
		}
		if (array[midl] == value)
			return (midl);
		else if (array[midl] < value)
			low = midl + 1;
		else
			high = midl - 1;
	}
	return (-1);
}
