#include "search_algos.h"
/**
 * print_array - funti
 * @array: array to print
 * @limt_low: point to start print
 * @limt_high: point to stop
 */
void print_array(int *array, int limt_low, int limt_high)
{
	char *a = ", ";
	int t = 0;

	if (limt_lo < limt_high)
	{
		printf("Searching in array: ");
		for (t = limt_lo; t <= limt_high; t++)
		{
			printf("%d", array[t]);
			if (t < limt_high)
				printf("%s", a);
		}
		printf("\n");
	}
}

/**
 * binary_search - funtion for binary search
 * @array: array to make search inside
 * @size: length if the array
 * @value: value to search in the array for binary search
 * Return: Always a int number
 */

int binary_search(int *array, size_t size, int value)
{
	int lo = 0;
	int high = size - 1;
	int midle = high / 2;

	if (array == NULL)
		return (-1);

	while (lo <= high)
	{
		print_array(array, lo, high);
		
		if (array[midle] == value)
		{
			if (midle != lo)
				print_array(array, midle, high);
			return (midle);
		}

		else if (array[midle] < value)
			lo = midle + 1;
		else
			high = midle - 1;

		midle = lo + (high - lo) / 2;
	}
	printf("Searching in array: %d\n", array[high]);

	return (-1);
}
