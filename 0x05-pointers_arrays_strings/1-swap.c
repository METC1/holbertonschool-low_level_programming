#include "main.h"

/**
 * swap_int -  swap ints with pointers
 * @a: First int (its adresss)to be swapped
 * @b: Second int (its adress) to be swapped
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
