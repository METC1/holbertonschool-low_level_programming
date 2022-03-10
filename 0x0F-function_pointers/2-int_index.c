#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: int pointer to array
 * @size: size of array
 * @cmp: function pointer to function that will compare or search
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 || array == NULL || cmp == NULL)
{
	return (-1);
}
for (i = 0; i < size; i++)
{
	if (((*cmp)(array[i])) != 0)
	{
		return (i);
	}
}

return (-1);
}
