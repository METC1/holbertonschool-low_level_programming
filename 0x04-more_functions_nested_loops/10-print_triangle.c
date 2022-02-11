#include "main.h"

/**
 * print_triangle - prints a triangle of n size
 * Description: print triangle using #
 * @size: int size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
	int i, j, k;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = 0 ; j < size - i ; j++)
			{
				_putchar(32);
			}
			for (k = 1 ; k <= i ; k++)
			{
			_putchar(35);
			}
		_putchar(10);
		}

	}
}
