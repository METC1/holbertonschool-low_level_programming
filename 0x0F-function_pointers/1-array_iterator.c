#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * as parameter on each element of array
 * @array: int pointer to array
 * @size: size of array
 * @action: function pointer to function that will be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if ((int *)array != NULL && (*action) != NULL)
{
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
}
