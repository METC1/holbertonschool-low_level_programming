#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - Creattes 2D array reserving
 * memmory with malloc and initializes array with 0
 * @width: width of the array
 * @height: height of the array
 *Return: int pointer to the array
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **arr;

if (width <= 0 || height <= 0)
{
	return (NULL);
}
arr = malloc(sizeof(int) * height);
if (arr == NULL)
{
free(arr);
	return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
free(arr);
	return (NULL);
}
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
