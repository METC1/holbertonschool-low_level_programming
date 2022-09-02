#include "search_algos.h"
#include<unistd.h>

/**
 * binary_search - function that searches for a value in an arrray of integers
 * using the Linear search algorithm
 * @array: Pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where first occurence of value searched is found or
 * or -1 if not found or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int) size - 1, middle, to_print;

	if (array == NULL)
		return (-1);
	for (; right >= left ;)
	{
		printf("Searching in array: ");
		for (to_print = left; to_print <= right ; to_print++)
		{
			printf("%d", array[to_print]);
			if (to_print != right)
				printf(", ");
			else
				printf("\n");
		}
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
