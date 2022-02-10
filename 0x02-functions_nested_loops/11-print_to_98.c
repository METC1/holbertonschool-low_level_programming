#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Function to print numbers from given number to 98
 * @n: number to count from
 *
 * Return: Void
 */
void print_to_98(int n)
{
if (n < 98)
	{
	for (; n < 98; n++)
		{
		printf("%d, ", n);
		}
	}
if (n > 98)
	{
	for (; n > 98; n--)
		{
		printf("%d, ", n);
		}
	}
printf("98\n");
}
