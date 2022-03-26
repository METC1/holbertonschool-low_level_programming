#include "main.h"
/**
 * set_bit - set the value of a bit to 1, at a given index
 * @index: starts from 0 of the bit you want to set
 * @n: number to be evaluated
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 32)
	{
		*n = (1 << index) | *n;
		return (1);
	}
	return (-1);
}
