#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - Creattes array reserving
 * memmory with malloc and initializes array with given string
 * @size: size of the array
 * @c: char to initialize the array with
 *Return: char pointer to the array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
if (size <= 0)
{
	return (NULL);
}
arr = malloc(sizeof(char) * size);
if (arr == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	arr[i] = c;
}
return (arr);
}
