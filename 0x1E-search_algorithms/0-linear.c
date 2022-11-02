#include "search_algos.h"

/**
 * linear_search - funtion for search linear in array
 * @array: array given to search linear
 * @size: lenght of the array
 * @value: data to search in array
 * Return: Always int vealue, if fail -1, else index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t v = 0;
	int valu = 0;

	if (array == NULL)
		return (-1);

	for (v = 0; v < size; v++)
	{
		valu = -1;
		printf("Value checked array[%ld] = [%d]\n", v, array[v]);
		if (array[v] == value)
		{
			valu = v;
			break;
		}
	}
	return (valu);
}
