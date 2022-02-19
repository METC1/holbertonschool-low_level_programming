#include "main.h"
/**
 * reverse_array - Reverses an array
 * Description: Reverse an array
 * @a: char array to be reversed
 * @n: number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j;
	int temp;

n = n - 1;
for (j = 0; j <= n / 2; j++)
	{
	temp = a[j];
	a[j] = a[n - j];
	a[n - j] = temp;
	}
}
