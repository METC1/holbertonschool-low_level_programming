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
int found;

found = 0;
if (size <= 0)
{
	return (-1);
}
for (i = 0; i < size; i++)
{
	if (((*cmp)(array[i])) != 0)
	{
		return (i);
		found = 1;
	}
}
if (found == 0)
{
	return (-1);
}
return (-1);
}
