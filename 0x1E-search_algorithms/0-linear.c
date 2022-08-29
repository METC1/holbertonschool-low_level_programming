#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an arrray of integers
 * using the Linear search algorithm
 * @array: Pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where first occurence of value searched is found or
 * or -1 if not found or array is null
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int ret = -1;

	if (array == NULL)
	{
		return (ret);
	}
	for (i = 0; i <= size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index %d\n", value, i);
			ret = i;
			return (ret);
		}

	}
	return (ret);


}
