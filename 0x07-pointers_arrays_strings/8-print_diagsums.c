#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the diagonal sums of an array
 * @a: array of ints
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, d1, d2;

d1 = 0;
d2 = 0;
for (i = 0; i < size; i++)
{
	d1 = d1 + a[(i * size) + i];
	d2 = d2 + a[(size - 1) * (i + 1)];
}
printf("%i, %i\n", d1, d2);
}
