#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - Creattes array reserving
 * memmory with malloc and initializes array with 0
 * @nmemb: elements of the array
 * @size: size of elements
 *Return: char pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *arr;
if (size <= 0 || nmemb <= 0)
{
	return (NULL);
}
arr = malloc(nmemb * size);
if (arr == NULL)
{
	return (NULL);
}
for (i = 0; i < (size * nmemb); i++)
{
	arr[i] = 0;
}
return (arr);
}
