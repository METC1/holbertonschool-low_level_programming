#include "main.h"

/**
 * print_square - prints a square of n size
 * Description: print square using #
 * @size: int size of square
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
	int i, j;

		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar(35);
			}
		_putchar(10);
		}
	}
}
