#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int index, j, k, preve;

	if (array == NULL || size == 0)
		return (-1);

	j = (int)sqrt((double)size);
	k = 0;
	preve = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		preve = index;
		index = k * j;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", preve, index);

	for (; preve <= index && preve < (int)size; preve++)
	{
		printf("Value checked array[%d] = [%d]\n", preve, array[preve]);
		if (array[preve] == value)
			return (preve);
	}

	return (-1);
}
