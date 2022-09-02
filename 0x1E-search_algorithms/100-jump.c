#include "search_algos.h"

/**
 * jump_search - search value in stored array of integers
 * using Jump search algorithm
 * @array: Pointer to array to search
 * @size: number of elements in array
 * @value: Value to search
 * Return: first index where value is found or -1 if not present or not found
 */

int jump_search(int *array, size_t size, int value)
{
int left = 0, right = 0, step = sqrt((int) size);
for (; array != NULL && left < (int) size ;)
	{
	if (value <= array[right] || right >= (int) size)
		{
		printf("Value found between indexes [%d] and [%d]\n", left, right);
		for (; left <= right ; left++)
			{
			printf("Value checked array[%d] = [%d]\n", left, array[left]);
			if (array[left] == value)
			return (left);
			if (array[left] == ((int) size - 1) || value < array[left + 1])
			return (-1);
			}
		}
		else
		{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += step;
		}
	}
	return (-1);
}
